# jaysort
Algorithm for quickly sort a group of digits


Method: During a group of array digits, first we find out the min and max item,

        by formula "(max - min) / n" get the unit size divisor,

        by the divisor we compute all item's sort position which between the min and max,

        then items which on that computed position item right side and smaller, move to left.
        (default sort direction Left to Right)

eg: int arr[] = {9, 1, 20};        min:1 max:20 diviser:(1+20)/3=7

computed position:  {1, 0, 2}      "(9-1)/7~=1, (1-1)/7=0, (20-1)/7~=2"

for position "1", it means the item "9" should be at index 1, equal "arr[1] = 9;",

we compare begin from the index value 1 to end, find the smaller than "9", then move to left,
each loop time same way.





Sample (2200 items):

2933 2933 2930 2932 2928 2931 2925 2931 2922 2930 2920 2929 2917 2929 2914 2928 2912 2927 2909 2927 2906 2926 2904 2925 2901 2925 2898 2924 2896 2923 2893 2923 2890 2922 2888 2921 2885 2921 2882 2920 2880 2919 2877 2919 2874 2918 2872 2917 2869 2917 2866 2916 2864 2915 2861 2915 2858 2914 2856 2913 2853 2913 2850 2912 2848 2911 2845 2911 2842 2910 2840 2909 2837 2909 2834 2908 2832 2907 2829 2907 2826 2906 2824 2905 2821 2905 2818 2904 2816 2903 2813 2903 2810 2902 2808 2901 2805 2901 2802 2900 2800 2899 2797 2899 2794 2898 2792 2897 2789 2897 2786 2896 2784 2895 2781 2895 2778 2894 2776 2893 2773 2893 2770 2892 2768 2891 2765 2891 2762 2890 2760 2889 2757 2889 2754 2888 2752 2887 2749 2887 2746 2886 2744 2885 2741 2885 2738 2884 2736 2883 2733 2883 2730 2882 2728 2881 2725 2881 2722 2880 2720 2879 2717 2879 2714 2878 2712 2877 2709 2877 2706 2876 2704 2875 2701 2875 2698 2874 2696 2873 2693 2873 2690 2872 2688 2871 2685 2871 2682 2870 2680 2869 2677 2869 2674 2868 2672 2867 2669 2867 2666 2866 2664 2865 2661 2865 2658 2864 2656 2863 2653 2863 2650 2862 2648 2861 2645 2861 2642 2860 2640 2859 2637 2859 2634 2858 2632 2857 2629 2857 2626 2856 2624 2855 2621 2855 2618 2854 2616 2853 2613 2853 2610 2852 2608 2851 2605 2851 2602 2850 2600 2849 2597 2849 2594 2848 2592 2847 2589 2847 2586 2846 2584 2845 2581 2845 2578 2844 2576 2843 2573 2843 2570 2842 2568 2841 2565 2841 2562 2840 2560 2839 2557 2839 2554 2838 2552 2837 2549 2837 2546 2836 2544 2835 2541 2835 2538 2834 2536 2833 2533 2833 2530 2832 2528 2831 2525 2831 2522 2830 2520 2829 2517 2829 2514 2828 2512 2827 2509 2827 2506 2826 2504 2825 2501 2825 2498 2824 2496 2823 2493 2823 2490 2822 2488 2821 2485 2821 2482 2820 2480 2819 2477 2819 2474 2818 2472 2817 2469 2817 2466 2816 2464 2815 2461 2815 2458 2814 2456 2813 2453 2813 2450 2812 2448 2811 2445 2811 2442 2810 2440 2809 2437 2809 2434 2808 2432 2807 2429 2807 2426 2806 2424 2805 2421 2805 2418 2804 2416 2803 2413 2803 2410 2802 2408 2801 2405 2801 2402 2800 2400 2799 2397 2799 2394 2798 2392 2797 2389 2797 2386 2796 2384 2795 2381 2795 2378 2794 2376 2793 2373 2793 2370 2792 2368 2791 2365 2791 2362 2790 2360 2789 2357 2789 2354 2788 2352 2787 2349 2787 2346 2786 2344 2785 2341 2785 2338 2784 2336 2783 2333 2783 2330 2782 2328 2781 2325 2781 2322 2780 2320 2779 2317 2779 2314 2778 2312 2777 2309 2777 2306 2776 2304 2775 2301 2775 2298 2774 2296 2773 2293 2773 2290 2772 2288 2771 2285 2771 2282 2770 2280 2769 2277 2769 2274 2768 2272 2767 2269 2767 2266 2766 2264 2765 2261 2765 2258 2764 2256 2763 2253 2763 2250 2762 2248 2761 2245 2761 2242 2760 2240 2759 2237 2759 2234 2758 2232 2757 2229 2757 2226 2756 2224 2755 2221 2755 2218 2754 2216 2753 2213 2753 2210 2752 2208 2751 2205 2751 2202 2750 2200 2749 2197 2749 2194 2748 2192 2747 2189 2747 2186 2746 2184 2745 2181 2745 2178 2744 2176 2743 2173 2743 2170 2742 2168 2741 2165 2741 2162 2740 2160 2739 2157 2739 2154 2738 2152 2737 2149 2737 2146 2736 2144 2735 2141 2735 2138 2734 2136 2733 2133 2733 2130 2732 2128 2731 2125 2731 2122 2730 2120 2729 2117 2729 2114 2728 2112 2727 2109 2727 2106 2726 2104 2725 2101 2725 2098 2724 2096 2723 2093 2723 2090 2722 2088 2721 2085 2721 2082 2720 2080 2719 2077 2719 2074 2718 2072 2717 2069 2717 2066 2716 2064 2715 2061 2715 2058 2714 2056 2713 2053 2713 2050 2712 2048 2711 2045 2711 2042 2710 2040 2709 2037 2709 2034 2708 2032 2707 2029 2707 2026 2706 2024 2705 2021 2705 2018 2704 2016 2703 2013 2703 2010 2702 2008 2701 2005 2701 2002 2700 2000 2699 1997 2699 1994 2698 1992 2697 1989 2697 1986 2696 1984 2695 1981 2695 1978 2694 1976 2693 1973 2693 1970 2692 1968 2691 1965 2691 1962 2690 1960 2689 1957 2689 1954 2688 1952 2687 1949 2687 1946 2686 1944 2685 1941 2685 1938 2684 1936 2683 1933 2683 1930 2682 1928 2681 1925 2681 1922 2680 1920 2679 1917 2679 1914 2678 1912 2677 1909 2677 1906 2676 1904 2675 1901 2675 1898 2674 1896 2673 1893 2673 1890 2672 1888 2671 1885 2671 1882 2670 1880 2669 1877 2669 1874 2668 1872 2667 1869 2667 1866 2666 1864 2665 1861 2665 1858 2664 1856 2663 1853 2663 1850 2662 1848 2661 1845 2661 1842 2660 1840 2659 1837 2659 1834 2658 1832 2657 1829 2657 1826 2656 1824 2655 1821 2655 1818 2654 1816 2653 1813 2653 1810 2652 1808 2651 1805 2651 1802 2650 1800 2649 1797 2649 1794 2648 1792 2647 1789 2647 1786 2646 1784 2645 1781 2645 1778 2644 1776 2643 1773 2643 1770 2642 1768 2641 1765 2641 1762 2640 1760 2639 1757 2639 1754 2638 1752 2637 1749 2637 1746 2636 1744 2635 1741 2635 1738 2634 1736 2633 1733 2633 1730 2632 1728 2631 1725 2631 1722 2630 1720 2629 1717 2629 1714 2628 1712 2627 1709 2627 1706 2626 1704 2625 1701 2625 1698 2624 1696 2623 1693 2623 1690 2622 1688 2621 1685 2621 1682 2620 1680 2619 1677 2619 1674 2618 1672 2617 1669 2617 1666 2616 1664 2615 1661 2615 1658 2614 1656 2613 1653 2613 1650 2612 1648 2611 1645 2611 1642 2610 1640 2609 1637 2609 1634 2608 1632 2607 1629 2607 1626 2606 1624 2605 1621 2605 1618 2604 1616 2603 1613 2603 1610 2602 1608 2601 1605 2601 1602 2600 1600 2599 1597 2599 1594 2598 1592 2597 1589 2597 1586 2596 1584 2595 1581 2595 1578 2594 1576 2593 1573 2593 1570 2592 1568 2591 1565 2591 1562 2590 1560 2589 1557 2589 1554 2588 1552 2587 1549 2587 1546 2586 1544 2585 1541 2585 1538 2584 1536 2583 1533 2583 1530 2582 1528 2581 1525 2581 1522 2580 1520 2579 1517 2579 1514 2578 1512 2577 1509 2577 1506 2576 1504 2575 1501 2575 1498 2574 1496 2573 1493 2573 1490 2572 1488 2571 1485 2571 1482 2570 1480 2569 1477 2569 1474 2568 1472 2567 1469 2567 1466 2566 1464 2565 1461 2565 1458 2564 1456 2563 1453 2563 1450 2562 1448 2561 1445 2561 1442 2560 1440 2559 1437 2559 1434 2558 1432 2557 1429 2557 1426 2556 1424 2555 1421 2555 1418 2554 1416 2553 1413 2553 1410 2552 1408 2551 1405 2551 1402 2550 1400 2549 1397 2549 1394 2548 1392 2547 1389 2547 1386 2546 1384 2545 1381 2545 1378 2544 1376 2543 1373 2543 1370 2542 1368 2541 1365 2541 1362 2540 1360 2539 1357 2539 1354 2538 1352 2537 1349 2537 1346 2536 1344 2535 1341 2535 1338 2534 1336 2533 1333 2533 1330 2532 1328 2531 1325 2531 1322 2530 1320 2529 1317 2529 1314 2528 1312 2527 1309 2527 1306 2526 1304 2525 1301 2525 1298 2524 1296 2523 1293 2523 1290 2522 1288 2521 1285 2521 1282 2520 1280 2519 1277 2519 1274 2518 1272 2517 1269 2517 1266 2516 1264 2515 1261 2515 1258 2514 1256 2513 1253 2513 1250 2512 1248 2511 1245 2511 1242 2510 1240 2509 1237 2509 1234 2508 1232 2507 1229 2507 1226 2506 1224 2505 1221 2505 1218 2504 1216 2503 1213 2503 1210 2502 1208 2501 1205 2501 1202 2500 1200 2499 1197 2499 1194 2498 1192 2497 1189 2497 1186 2496 1184 2495 1181 2495 1178 2494 1176 2493 1173 2493 1170 2492 1168 2491 1165 2491 1162 2490 1160 2489 1157 2489 1154 2488 1152 2487 1149 2487 1146 2486 1144 2485 1141 2485 1138 2484 1136 2483 1133 2483 1130 2482 1128 2481 1125 2481 1122 2480 1120 2479 1117 2479 1114 2478 1112 2477 1109 2477 1106 2476 1104 2475 1101 2475 1098 2474 1096 2473 1093 2473 1090 2472 1088 2471 1085 2471 1082 2470 1080 2469 1077 2469 1074 2468 1072 2467 1069 2467 1066 2466 1064 2465 1061 2465 1058 2464 1056 2463 1053 2463 1050 2462 1048 2461 1045 2461 1042 2460 1040 2459 1037 2459 1034 2458 1032 2457 1029 2457 1026 2456 1024 2455 1021 2455 1018 2454 1016 2453 1013 2453 1010 2452 1008 2451 1005 2451 1002 2450 1000 2449 997 2449 994 2448 992 2447 989 2447 986 2446 984 2445 981 2445 978 2444 976 2443 973 2443 970 2442 968 2441 965 2441 962 2440 960 2439 957 2439 954 2438 952 2437 949 2437 946 2436 944 2435 941 2435 938 2434 936 2433 933 2433 930 2432 928 2431 925 2431 922 2430 920 2429 917 2429 914 2428 912 2427 909 2427 906 2426 904 2425 901 2425 898 2424 896 2423 893 2423 890 2422 888 2421 885 2421 882 2420 880 2419 877 2419 874 2418 872 2417 869 2417 866 2416 864 2415 861 2415 858 2414 856 2413 853 2413 850 2412 848 2411 845 2411 842 2410 840 2409 837 2409 834 2408 832 2407 829 2407 826 2406 824 2405 821 2405 818 2404 816 2403 813 2403 810 2402 808 2401 805 2401 802 2400 800 2399 797 2399 794 2398 792 2397 789 2397 786 2396 784 2395 781 2395 778 2394 776 2393 773 2393 770 2392 768 2391 765 2391 762 2390 760 2389 757 2389 754 2388 752 2387 749 2387 746 2386 744 2385 741 2385 738 2384 736 2383 733 2383 730 2382 728 2381 725 2381 722 2380 720 2379 717 2379 714 2378 712 2377 709 2377 706 2376 704 2375 701 2375 698 2374 696 2373 693 2373 690 2372 688 2371 685 2371 682 2370 680 2369 677 2369 674 2368 672 2367 669 2367 666 2366 664 2365 661 2365 658 2364 656 2363 653 2363 650 2362 648 2361 645 2361 642 2360 640 2359 637 2359 634 2358 632 2357 629 2357 626 2356 624 2355 621 2355 618 2354 616 2353 613 2353 610 2352 608 2351 605 2351 602 2350 600 2349 597 2349 594 2348 592 2347 589 2347 586 2346 584 2345 581 2345 578 2344 576 2343 573 2343 570 2342 568 2341 565 2341 562 2340 560 2339 557 2339 554 2338 552 2337 549 2337 546 2336 544 2335 541 2335 538 2334 536 2333 533 2333 530 2332 528 2331 525 2331 522 2330 520 2329 517 2329 514 2328 512 2327 509 2327 506 2326 504 2325 501 2325 498 2324 496 2323 493 2323 490 2322 488 2321 485 2321 482 2320 480 2319 477 2319 474 2318 472 2317 469 2317 466 2316 464 2315 461 2315 458 2314 456 2313 453 2313 450 2312 448 2311 445 2311 442 2310 440 2309 437 2309 434 2308 432 2307 429 2307 426 2306 424 2305 421 2305 418 2304 416 2303 413 2303 410 2302 408 2301 405 2301 402 2300 400 2299 397 2299 394 2298 392 2297 389 2297 386 2296 384 2295 381 2295 378 2294 376 2293 373 2293 370 2292 368 2291 365 2291 362 2290 360 2289 357 2289 354 2288 352 2287 349 2287 346 2286 344 2285 341 2285 338 2284 336 2283 333 2283 330 2282 328 2281 325 2281 322 2280 320 2279 317 2279 314 2278 312 2277 309 2277 306 2276 304 2275 301 2275 298 2274 296 2273 293 2273 290 2272 288 2271 285 2271 282 2270 280 2269 277 2269 274 2268 272 2267 269 2267 266 2266 264 2265 261 2265 258 2264 256 2263 253 2263 250 2262 248 2261 245 2261 242 2260 240 2259 237 2259 234 2258 232 2257 229 2257 226 2256 224 2255 221 2255 218 2254 216 2253 213 2253 210 2252 208 2251 205 2251 202 2250 200 2249 197 2249 194 2248 192 2247 189 2247 186 2246 184 2245 181 2245 178 2244 176 2243 173 2243 170 2242 168 2241 165 2241 162 2240 160 2239 157 2239 154 2238 152 2237 149 2237 146 2236 144 2235 141 2235 138 2234 136 2233 133 2233 130 2232 128 2231 125 2231 122 2230 120 2229 117 2229 114 2228 112 2227 109 2227 106 2226 104 2225 101 2225 98 2224 96 2223 93 2223 90 2222 88 2221 85 2221 82 2220 80 2219 77 2219 74 2218 72 2217 69 2217 66 2216 64 2215 61 2215 58 2214 56 2213 53 2213 50 2212 48 2211 45 2211 42 2210 40 2209 37 2209 34 2208 32 2207 29 2207 26 2206 24 2205 21 2205 18 2204 16 2203 13 2203 10 2202 8 2201 5 2201 2 2200

Sorted:

2 5 8 10 13 16 18 21 24 26 29 32 34 37 40 42 45 48 50 53 56 58 61 64 66 69 72 74 77 80 82 85 88 90 93 96 98 101 104 106 109 112 114 117 120 122 125 128 130 133 136 138 141 144 146 149 152 154 157 160 162 165 168 170 173 176 178 181 184 186 189 192 194 197 200 202 205 208 210 213 216 218 221 224 226 229 232 234 237 240 242 245 248 250 253 256 258 261 264 266 269 272 274 277 280 282 285 288 290 293 296 298 301 304 306 309 312 314 317 320 322 325 328 330 333 336 338 341 344 346 349 352 354 357 360 362 365 368 370 373 376 378 381 384 386 389 392 394 397 400 402 405 408 410 413 416 418 421 424 426 429 432 434 437 440 442 445 448 450 453 456 458 461 464 466 469 472 474 477 480 482 485 488 490 493 496 498 501 504 506 509 512 514 517 520 522 525 528 530 533 536 538 541 544 546 549 552 554 557 560 562 565 568 570 573 576 578 581 584 586 589 592 594 597 600 602 605 608 610 613 616 618 621 624 626 629 632 634 637 640 642 645 648 650 653 656 658 661 664 666 669 672 674 677 680 682 685 688 690 693 696 698 701 704 706 709 712 714 717 720 722 725 728 730 733 736 738 741 744 746 749 752 754 757 760 762 765 768 770 773 776 778 781 784 786 789 792 794 797 800 802 805 808 810 813 816 818 821 824 826 829 832 834 837 840 842 845 848 850 853 856 858 861 864 866 869 872 874 877 880 882 885 888 890 893 896 898 901 904 906 909 912 914 917 920 922 925 928 930 933 936 938 941 944 946 949 952 954 957 960 962 965 968 970 973 976 978 981 984 986 989 992 994 997 1000 1002 1005 1008 1010 1013 1016 1018 1021 1024 1026 1029 1032 1034 1037 1040 1042 1045 1048 1050 1053 1056 1058 1061 1064 1066 1069 1072 1074 1077 1080 1082 1085 1088 1090 1093 1096 1098 1101 1104 1106 1109 1112 1114 1117 1120 1122 1125 1128 1130 1133 1136 1138 1141 1144 1146 1149 1152 1154 1157 1160 1162 1165 1168 1170 1173 1176 1178 1181 1184 1186 1189 1192 1194 1197 1200 1202 1205 1208 1210 1213 1216 1218 1221 1224 1226 1229 1232 1234 1237 1240 1242 1245 1248 1250 1253 1256 1258 1261 1264 1266 1269 1272 1274 1277 1280 1282 1285 1288 1290 1293 1296 1298 1301 1304 1306 1309 1312 1314 1317 1320 1322 1325 1328 1330 1333 1336 1338 1341 1344 1346 1349 1352 1354 1357 1360 1362 1365 1368 1370 1373 1376 1378 1381 1384 1386 1389 1392 1394 1397 1400 1402 1405 1408 1410 1413 1416 1418 1421 1424 1426 1429 1432 1434 1437 1440 1442 1445 1448 1450 1453 1456 1458 1461 1464 1466 1469 1472 1474 1477 1480 1482 1485 1488 1490 1493 1496 1498 1501 1504 1506 1509 1512 1514 1517 1520 1522 1525 1528 1530 1533 1536 1538 1541 1544 1546 1549 1552 1554 1557 1560 1562 1565 1568 1570 1573 1576 1578 1581 1584 1586 1589 1592 1594 1597 1600 1602 1605 1608 1610 1613 1616 1618 1621 1624 1626 1629 1632 1634 1637 1640 1642 1645 1648 1650 1653 1656 1658 1661 1664 1666 1669 1672 1674 1677 1680 1682 1685 1688 1690 1693 1696 1698 1701 1704 1706 1709 1712 1714 1717 1720 1722 1725 1728 1730 1733 1736 1738 1741 1744 1746 1749 1752 1754 1757 1760 1762 1765 1768 1770 1773 1776 1778 1781 1784 1786 1789 1792 1794 1797 1800 1802 1805 1808 1810 1813 1816 1818 1821 1824 1826 1829 1832 1834 1837 1840 1842 1845 1848 1850 1853 1856 1858 1861 1864 1866 1869 1872 1874 1877 1880 1882 1885 1888 1890 1893 1896 1898 1901 1904 1906 1909 1912 1914 1917 1920 1922 1925 1928 1930 1933 1936 1938 1941 1944 1946 1949 1952 1954 1957 1960 1962 1965 1968 1970 1973 1976 1978 1981 1984 1986 1989 1992 1994 1997 2000 2002 2005 2008 2010 2013 2016 2018 2021 2024 2026 2029 2032 2034 2037 2040 2042 2045 2048 2050 2053 2056 2058 2061 2064 2066 2069 2072 2074 2077 2080 2082 2085 2088 2090 2093 2096 2098 2101 2104 2106 2109 2112 2114 2117 2120 2122 2125 2128 2130 2133 2136 2138 2141 2144 2146 2149 2152 2154 2157 2160 2162 2165 2168 2170 2173 2176 2178 2181 2184 2186 2189 2192 2194 2197 2200 2200 2201 2201 2202 2202 2203 2203 2204 2205 2205 2205 2206 2207 2207 2208 2208 2209 2209 2210 2210 2211 2211 2212 2213 2213 2213 2214 2215 2215 2216 2216 2217 2217 2218 2218 2219 2219 2220 2221 2221 2221 2222 2223 2223 2224 2224 2225 2225 2226 2226 2227 2227 2228 2229 2229 2229 2230 2231 2231 2232 2232 2233 2233 2234 2234 2235 2235 2236 2237 2237 2237 2238 2239 2239 2240 2240 2241 2241 2242 2242 2243 2243 2244 2245 2245 2245 2246 2247 2247 2248 2248 2249 2249 2250 2250 2251 2251 2252 2253 2253 2253 2254 2255 2255 2256 2256 2257 2257 2258 2258 2259 2259 2260 2261 2261 2261 2262 2263 2263 2264 2264 2265 2265 2266 2266 2267 2267 2268 2269 2269 2269 2270 2271 2271 2272 2272 2273 2273 2274 2274 2275 2275 2276 2277 2277 2277 2278 2279 2279 2280 2280 2281 2281 2282 2282 2283 2283 2284 2285 2285 2285 2286 2287 2287 2288 2288 2289 2289 2290 2290 2291 2291 2292 2293 2293 2293 2294 2295 2295 2296 2296 2297 2297 2298 2298 2299 2299 2300 2301 2301 2301 2302 2303 2303 2304 2304 2305 2305 2306 2306 2307 2307 2308 2309 2309 2309 2310 2311 2311 2312 2312 2313 2313 2314 2314 2315 2315 2316 2317 2317 2317 2318 2319 2319 2320 2320 2321 2321 2322 2322 2323 2323 2324 2325 2325 2325 2326 2327 2327 2328 2328 2329 2329 2330 2330 2331 2331 2332 2333 2333 2333 2334 2335 2335 2336 2336 2337 2337 2338 2338 2339 2339 2340 2341 2341 2341 2342 2343 2343 2344 2344 2345 2345 2346 2346 2347 2347 2348 2349 2349 2349 2350 2351 2351 2352 2352 2353 2353 2354 2354 2355 2355 2356 2357 2357 2357 2358 2359 2359 2360 2360 2361 2361 2362 2362 2363 2363 2364 2365 2365 2365 2366 2367 2367 2368 2368 2369 2369 2370 2370 2371 2371 2372 2373 2373 2373 2374 2375 2375 2376 2376 2377 2377 2378 2378 2379 2379 2380 2381 2381 2381 2382 2383 2383 2384 2384 2385 2385 2386 2386 2387 2387 2388 2389 2389 2389 2390 2391 2391 2392 2392 2393 2393 2394 2394 2395 2395 2396 2397 2397 2397 2398 2399 2399 2400 2400 2401 2401 2402 2402 2403 2403 2404 2405 2405 2405 2406 2407 2407 2408 2408 2409 2409 2410 2410 2411 2411 2412 2413 2413 2413 2414 2415 2415 2416 2416 2417 2417 2418 2418 2419 2419 2420 2421 2421 2421 2422 2423 2423 2424 2424 2425 2425 2426 2426 2427 2427 2428 2429 2429 2429 2430 2431 2431 2432 2432 2433 2433 2434 2434 2435 2435 2436 2437 2437 2437 2438 2439 2439 2440 2440 2441 2441 2442 2442 2443 2443 2444 2445 2445 2445 2446 2447 2447 2448 2448 2449 2449 2450 2450 2451 2451 2452 2453 2453 2453 2454 2455 2455 2456 2456 2457 2457 2458 2458 2459 2459 2460 2461 2461 2461 2462 2463 2463 2464 2464 2465 2465 2466 2466 2467 2467 2468 2469 2469 2469 2470 2471 2471 2472 2472 2473 2473 2474 2474 2475 2475 2476 2477 2477 2477 2478 2479 2479 2480 2480 2481 2481 2482 2482 2483 2483 2484 2485 2485 2485 2486 2487 2487 2488 2488 2489 2489 2490 2490 2491 2491 2492 2493 2493 2493 2494 2495 2495 2496 2496 2497 2497 2498 2498 2499 2499 2500 2501 2501 2501 2502 2503 2503 2504 2504 2505 2505 2506 2506 2507 2507 2508 2509 2509 2509 2510 2511 2511 2512 2512 2513 2513 2514 2514 2515 2515 2516 2517 2517 2517 2518 2519 2519 2520 2520 2521 2521 2522 2522 2523 2523 2524 2525 2525 2525 2526 2527 2527 2528 2528 2529 2529 2530 2530 2531 2531 2532 2533 2533 2533 2534 2535 2535 2536 2536 2537 2537 2538 2538 2539 2539 2540 2541 2541 2541 2542 2543 2543 2544 2544 2545 2545 2546 2546 2547 2547 2548 2549 2549 2549 2550 2551 2551 2552 2552 2553 2553 2554 2554 2555 2555 2556 2557 2557 2557 2558 2559 2559 2560 2560 2561 2561 2562 2562 2563 2563 2564 2565 2565 2565 2566 2567 2567 2568 2568 2569 2569 2570 2570 2571 2571 2572 2573 2573 2573 2574 2575 2575 2576 2576 2577 2577 2578 2578 2579 2579 2580 2581 2581 2581 2582 2583 2583 2584 2584 2585 2585 2586 2586 2587 2587 2588 2589 2589 2589 2590 2591 2591 2592 2592 2593 2593 2594 2594 2595 2595 2596 2597 2597 2597 2598 2599 2599 2600 2600 2601 2601 2602 2602 2603 2603 2604 2605 2605 2605 2606 2607 2607 2608 2608 2609 2609 2610 2610 2611 2611 2612 2613 2613 2613 2614 2615 2615 2616 2616 2617 2617 2618 2618 2619 2619 2620 2621 2621 2621 2622 2623 2623 2624 2624 2625 2625 2626 2626 2627 2627 2628 2629 2629 2629 2630 2631 2631 2632 2632 2633 2633 2634 2634 2635 2635 2636 2637 2637 2637 2638 2639 2639 2640 2640 2641 2641 2642 2642 2643 2643 2644 2645 2645 2645 2646 2647 2647 2648 2648 2649 2649 2650 2650 2651 2651 2652 2653 2653 2653 2654 2655 2655 2656 2656 2657 2657 2658 2658 2659 2659 2660 2661 2661 2661 2662 2663 2663 2664 2664 2665 2665 2666 2666 2667 2667 2668 2669 2669 2669 2670 2671 2671 2672 2672 2673 2673 2674 2674 2675 2675 2676 2677 2677 2677 2678 2679 2679 2680 2680 2681 2681 2682 2682 2683 2683 2684 2685 2685 2685 2686 2687 2687 2688 2688 2689 2689 2690 2690 2691 2691 2692 2693 2693 2693 2694 2695 2695 2696 2696 2697 2697 2698 2698 2699 2699 2700 2701 2701 2701 2702 2703 2703 2704 2704 2705 2705 2706 2706 2707 2707 2708 2709 2709 2709 2710 2711 2711 2712 2712 2713 2713 2714 2714 2715 2715 2716 2717 2717 2717 2718 2719 2719 2720 2720 2721 2721 2722 2722 2723 2723 2724 2725 2725 2725 2726 2727 2727 2728 2728 2729 2729 2730 2730 2731 2731 2732 2733 2733 2733 2734 2735 2735 2736 2736 2737 2737 2738 2738 2739 2739 2740 2741 2741 2741 2742 2743 2743 2744 2744 2745 2745 2746 2746 2747 2747 2748 2749 2749 2749 2750 2751 2751 2752 2752 2753 2753 2754 2754 2755 2755 2756 2757 2757 2757 2758 2759 2759 2760 2760 2761 2761 2762 2762 2763 2763 2764 2765 2765 2765 2766 2767 2767 2768 2768 2769 2769 2770 2770 2771 2771 2772 2773 2773 2773 2774 2775 2775 2776 2776 2777 2777 2778 2778 2779 2779 2780 2781 2781 2781 2782 2783 2783 2784 2784 2785 2785 2786 2786 2787 2787 2788 2789 2789 2789 2790 2791 2791 2792 2792 2793 2793 2794 2794 2795 2795 2796 2797 2797 2797 2798 2799 2799 2800 2800 2801 2801 2802 2802 2803 2803 2804 2805 2805 2805 2806 2807 2807 2808 2808 2809 2809 2810 2810 2811 2811 2812 2813 2813 2813 2814 2815 2815 2816 2816 2817 2817 2818 2818 2819 2819 2820 2821 2821 2821 2822 2823 2823 2824 2824 2825 2825 2826 2826 2827 2827 2828 2829 2829 2829 2830 2831 2831 2832 2832 2833 2833 2834 2834 2835 2835 2836 2837 2837 2837 2838 2839 2839 2840 2840 2841 2841 2842 2842 2843 2843 2844 2845 2845 2845 2846 2847 2847 2848 2848 2849 2849 2850 2850 2851 2851 2852 2853 2853 2853 2854 2855 2855 2856 2856 2857 2857 2858 2858 2859 2859 2860 2861 2861 2861 2862 2863 2863 2864 2864 2865 2865 2866 2866 2867 2867 2868 2869 2869 2869 2870 2871 2871 2872 2872 2873 2873 2874 2874 2875 2875 2876 2877 2877 2877 2878 2879 2879 2880 2880 2881 2881 2882 2882 2883 2883 2884 2885 2885 2885 2886 2887 2887 2888 2888 2889 2889 2890 2890 2891 2891 2892 2893 2893 2893 2894 2895 2895 2896 2896 2897 2897 2898 2898 2899 2899 2900 2901 2901 2901 2902 2903 2903 2904 2904 2905 2905 2906 2906 2907 2907 2908 2909 2909 2909 2910 2911 2911 2912 2912 2913 2913 2914 2914 2915 2915 2916 2917 2917 2917 2918 2919 2919 2920 2920 2921 2921 2922 2922 2923 2923 2924 2925 2925 2925 2926 2927 2927 2928 2928 2929 2929 2930 2930 2931 2933 2933 2933 2933

Used Time:0.016547
