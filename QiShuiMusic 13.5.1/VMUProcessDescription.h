@interface VMUProcessDescription : NSObject
@property (nonatomic) Q physicalFootprint;
@property (nonatomic) Q physicalFootprintPeak;
@property (nonatomic) I idleExitStatus;
- (unsigned int)idleExitStatus;
- (id)executablePath;
- (unsigned long long)physicalFootprintPeak;
- (BOOL)is64Bit;
- (id)initWithPid:orTask:;
- (id)bundleIdentifier;
- (id)binaryImages;
- (void)dealloc;
- (id)binaryImagesDescription;
- (id)_buildInfoDescription;
- (id)_systemVersionDescription;
- (id)processVersion;
- (unsigned long long)physicalFootprint;
- (id)valueForEnvVar:;
- (id)binaryImagesDescriptionForBacktraces:;
- (unsigned int)task;
- (id)_buildVersionDictionary;
- (id)dateAndVersionDescription;
- (void)clearCrashReporterInfo;
- (id)_cpuTypeDescription;
- (id)_sanitizeVersion:;
- (id)displayName;
- (id)_osVersionDictionary;
- (int)cpuType;
- (id)date;
- (id)initWithTask:getBinariesList:;
- (id)processName;
- (BOOL)initFromCorpse;
- (id)processIdentifier;
- (id)processVersionDictionary;
- (void)initFromLiveProcess;
- (int)pid;
- (void).cxx_destruct;
- (void)setCrashReporterInfo;
- (id)processStatisticsDescription;
- (void)_libraryLoaded:;
- (id)description;
- (id)_rangesOfBinaryImages:forBacktraces:;
- (BOOL)isAppleApplication;
- (int)parentPid;
- (void)cleansePathsIncludingBinaryImageList:;
- (id)parentProcessPath;
- (id)processDescriptionHeader;
- (id)_binaryImagesDescriptionForRanges:;
- (id)_bundleLock;
- (id)binaryImageDictionaryForAddress:;
- (id)parentProcessName;
+ (id)parseBinaryImagesDescription:;
+ (id)symbolicatorFromBinaryImagesDescription:;
+ (id)symbolicatorFromBinaryImagesDescription:withArchitecture:;
@end
