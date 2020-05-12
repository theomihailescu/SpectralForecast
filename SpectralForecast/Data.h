#pragma once

#define MAX_COLUMNS 20

namespace Data
{
    static constexpr double A[][MAX_COLUMNS] = {
                    {
                            14.63455417, 33.33540908, 48.5346289, 54.40591345, 45.47387088, 40.91810188, 57.24326105, 64.50232973, 60.46715544, 45.53757602, 32.25320269, 36.53205015, 59.63100358, 35.08429574, 38.2696228, 20.20196282, 41.39519842, 20.69972994, 11.73613764, 5.898316081
                    },
                    {
                            10.29883822, 12.46169241, 30.62563458, 39.11918097, 31.02517547, 28.57402099, 36.54040997, 42.04595757, 41.43556225, 39.20654783, 38.94325577, 48.62999251, 67.55958251, 45.51412967, 21.10683064, 21.95257018, 15.07824079, 21.20083509, 27.15687534, 24.57611384
                    },
                    {
                            35.91642224, 43.12894406, 33.58721642, 41.67928498, 32.62250637, 21.98427924, 22.34026212, 25.63870138, 26.70098982, 28.30575777, 56.031738, 44.54197531, 51.93706408, 34.99619794, 52.30498914, 43.09658829, 42.15275599, 27.42707464, 17.21776295, 25.38498666
                    },
                    {
                            23.31370881, 37.28000885, 34.13100592, 30.59352494, 32.97786635, 28.54987127, 32.60805505, 31.47798046, 47.86189197, 35.63126478, 46.60522044, 62.76519625, 63.31954168, 65.2512562, 61.83116216, 52.35276672, 43.29110701, 41.28775516, 42.36337003, 41.05366029
                    },
                    {
                            19.00588074, 21.53482192, 21.13232714, 21.36800617, 26.06544383, 30.59310053, 31.84606375, 60.31727148, 47.2017548, 49.48048029, 50.18030505, 73.26068045, 75.2631181, 65.27823659, 56.95211024, 56.69536053, 51.54729273, 28.20773729, 26.57287983, 18.72475153
                    },
                    {
                            15.33599153, 22.15468277, 21.85507348, 28.83566798, 29.92646783, 33.30923629, 47.91543916, 56.93808987, 45.12653343, 35.08894281, 78.11664493, 66.63319211, 57.74958956, 51.32915641, 48.18814261, 38.8433911, 26.64920728, 27.10472137, 20.85290436, 18.1510638
                    },
                    {
                            18.21483993, 23.58234551, 31.15699481, 35.70849745, 46.56781642, 47.70246959, 44.48395247, 41.0132428, 37.91890483, 30.52682109, 55.257475, 52.92727807, 76.91302227, 48.15819309, 46.75466437, 37.3786672, 26.40768592, 37.59345016, 49.81989354, 38.01950563
                    },
                    {
                            37.61704143, 36.73780713, 39.38209142, 50.06922511, 61.568164, 47.52314914, 34.36157057, 37.79013514, 43.34876431, 36.79508112, 39.54516914, 48.83873636, 29.54260286, 25.20886197, 41.34996167, 47.89398799, 40.69364931, 48.47983537, 35.71608191, 30.17727407
                    },
                    {
                            52.86462931, 41.03919087, 25.51549355, 24.94192144, 34.42493796, 30.18645239, 37.78476401, 34.33409962, 34.95435278, 50.77974757, 45.41541876, 38.09896767, 26.37566242, 25.1545832, 36.46451706, 20.64417777, 21.79144547, 24.03118481, 19.92090467, 21.50363362
                    },
                    {
                            12.15405894, 20.66777124, 19.43330263, 24.94293287, 19.7196194, 40.40205886, 52.73167713, 58.96462939, 42.05465559, 43.9482672, 31.46516106, 26.64749719, 23.24957598, 30.12006486, 23.36391232, 25.36235919, 29.77639764, 20.88562721, 21.33350243, 32.14738766
                    }
    };


    static constexpr double B[][20] = {
            {
                    58.59428605, 74.51578323, 69.92554262, 62.18893341, 58.1910389, 49.83977568, 66.70035725, 67.69530936, 76.88703799, 69.8993607, 56.55597664, 46.92174966, 70.03085496, 68.95302149, 62.62935913, 36.27094549, 47.05928794, 35.26881146, 42.14508731, 43.30974294
            },
            {
                    48.11362149, 54.55108073, 60.92917062, 57.97136076, 53.51450783, 56.4005655, 59.44473477, 69.03408113, 74.71353519, 71.0595183, 63.45554111, 67.69548448, 70.70224133, 66.19322101, 50.61913928, 67.09605716, 58.15815665, 40.81742821, 50.94995166, 59.02783511
            },
            {
                    54.15391155, 62.16669039, 58.72686316, 63.28828534, 60.40301858, 63.66723297, 58.79310936, 59.04385307, 61.89114316, 63.83084088, 66.82354984, 79.51288002, 79.80872205, 69.15253775, 67.02739795, 79.65819444, 65.46902095, 51.22552303, 45.52394729, 53.50686612
            },
            {
                    51.40630463, 65.42235292, 64.15460861, 53.1817107, 49.79853796, 56.40863373, 61.10284055, 67.4792673, 79.74821256, 71.14462942, 69.91521208, 77.13411504, 77.24688814, 73.26865263, 71.62208601, 66.51383052, 67.61663175, 50.83279985, 48.35262089, 42.62587914
            },
            {
                    25.61315549, 33.03465057, 38.09441185, 37.71583681, 46.50725686, 52.25606134, 61.69181992, 73.62847433, 65.43322147, 71.81016206, 78.32297034, 80.88732921, 82.25426409, 70.17023642, 48.15348324, 55.55342563, 66.14697928, 26.58513659, 34.67405222, 35.07888046
            },
            {
                    26.31474462, 38.14442811, 36.2821541, 49.78780238, 60.87704583, 69.92016926, 68.361799, 75.24428401, 73.63104844, 68.85669114, 75.56487649, 72.98211888, 64.07329389, 49.24515011, 37.56630653, 47.85279514, 37.5948176, 36.8464021, 38.81466576, 32.20636391
            },
            {
                    56.83936657, 52.11582382, 62.44837278, 62.4619503, 74.3642643, 75.26585496, 73.71870602, 75.60859235, 69.55071184, 60.84793955, 64.95403427, 67.12932344, 65.86701378, 58.58770002, 45.90835737, 41.89546996, 45.29551806, 58.36924134, 74.06798424, 53.1207613
            },
            {
                    54.47134436, 48.09997376, 70.33293746, 64.98671303, 82.45591911, 84.13619172, 67.56382012, 70.18348542, 68.85653836, 70.38938752, 46.48654801, 42.02376144, 32.23438543, 31.74522153, 36.90085798, 39.27438863, 52.46185785, 61.56583795, 70.31487121, 66.30488019
            },
            {
                    59.86489755, 58.99111247, 55.29283476, 50.67835215, 57.8270732, 62.15369863, 68.53567835, 74.11088543, 72.11754623, 66.15444945, 57.52436135, 56.53366976, 52.38549727, 36.66170931, 42.41444719, 39.28952251, 42.35567476, 45.53281997, 36.50814833, 26.79901769
            },
            {
                    14.51738015, 24.52803006, 29.71059415, 60.40178168, 67.36195814, 68.91317653, 67.23213086, 69.50312968, 51.92522794, 64.52583963, 41.15018278, 55.07699015, 57.68767106, 69.61288476, 45.86629789, 48.21266898, 53.56543461, 52.97983709, 51.11036874, 53.29172618
            }
    };
    static constexpr double P[][MAX_COLUMNS] = {
            {
                45.33004172, 60.67719054, 53.37413074, 50.38205841, 99.45299026, 99.55257302, 99.6433936, 99.83031989, 99.77802503, 98.98845619, 64.15034771, 52.23685675, 67.38108484, 22.29958275, 19.26926287, 6.431154381, 48.99749652, 29.91223922, 10.80820584, 2.593184979
            },
            {
                16.78066759, 27.00556328, 99.53184979, 99.54742698, 98.42239221, 79.8922114, 96.85883171, 99.33171071, 99.76397775, 93.54311544, 72.71529903, 43.38817803, 80.13852573, 42.97955494, 16.34297636, 17.04659249, 8.528233658, 21.7659249, 19.78734353, 46.07371349
            },
            {
                41.55799722, 49.48636996, 75.37607789, 82.70347705, 55.47774687, 46.17079277, 52.28080668, 76.74311544, 92.89012517, 90.57496523, 76.27510431, 43.69499305, 46.59763561, 36.31307371, 42.86161335, 19.64840056, 33.43838665, 13.33977747, 5.309596662, 13.71168289
            },
            {
                21.90625869, 43.88901252, 45.81363004, 66.33769124, 58.23880389, 38.83630042, 56.31724618, 59.44061196, 72.77107093, 99.09109875, 95.78052851, 49.68803894, 56.83435327, 51.9759388, 41.9744089, 26.11057024, 17.61015299, 14.68845619, 16.94589708, 17.2433936
            },
            {
                55.9705146, 38.92044506, 27.09888734, 26.12739917, 32.84311544, 39.32378303, 46.41877608, 99.33977747, 78.72739917, 67.27454798, 57.42767733, 40.51808067, 65.87802503, 53.85257302, 50.51808067, 54.54979138, 29.34770515, 12.40027816, 21.74798331, 31.05215577
            },
            {
                15.37872045, 17.68511822, 21.39582754, 35.13880389, 50.98859527, 87.39151599, 81.31571627, 79.28414465, 72.02114047, 52.58094576, 71.44297636, 36.8403338, 34.21363004, 60.42072323, 61.48317107, 42.82586926, 21.87872045, 51.41877608, 9.539916551, 9.053268428
            },
            {
                13.81571627, 25.33880389, 41.14353268, 71.33296245, 93.57566064, 99.66397775, 99.63477051, 90.67649513, 48.82141864, 46.77607789, 41.53713491, 30.72934631, 69.15674548, 40.61265647, 55.56119611, 29.75340751, 13.16675939, 14.05006954, 29.29554937, 21.66995828
            },
            {
                37.83143255, 47.23226704, 94.71293463, 98.26286509, 99.7689847, 97.02670376, 94.19485396, 70.00611961, 84.05368567, 59.12141864, 33.03518776, 28.06022253, 20.12573018, 20.7984701, 46.73504868, 42.17802503, 18.83379694, 40.96467316, 12.63463143, 6.085396384
            },
            {
                98.70764951, 98.20611961, 65.41335188, 60.32767733, 89.23546592, 83.15479833, 94.69791377, 93.77037552, 69.73783032, 89.9077886, 46.0488178, 33.12489569, 17.83810848, 22.52795549, 29.572879, 13.32934631, 20.86022253, 15.618637, 9.364951321, 7.354381085
            },
            {
                24.32614743, 41.14130737, 39.11043115, 42.6403338, 64.11988873, 92.9077886, 99.85591099, 99.94770515, 98.2488178, 90.77663421, 74.79388039, 36.14381085, 26.69485396, 25.04687065, 12.65994437, 24.71696801, 45.91251739, 6.78984701, 6.941446453, 4.170792768
            }
    };

}//namespace Data