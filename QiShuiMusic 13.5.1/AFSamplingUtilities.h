@interface AFSamplingUtilities : NSObject
+ (id)timezone;
+ (id)component;
+ (id)sampledSubDirectoryPath;
+ (id)sampledCachesSubDirectoryPath;
+ (id)sampledPlistFileName;
+ (id)sampledSubDirectoryNameFormat;
+ (id)sampledCurrentSamplingDateKey;
+ (id)sampledLibraryDirectoryPath;
+ (id)createSamplingDirectory;
+ (id)deleteItemAtFilePath:;
+ (void)deleteAllSamplingData;
+ (id)samplingDateAsString;
@end
