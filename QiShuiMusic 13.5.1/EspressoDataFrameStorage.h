@interface EspressoDataFrameStorage : NSObject
@property (nonatomic) NSMutableArray dataFrames;
@property (nonatomic) NSMutableDictionary mappedFiles;
@property (nonatomic) NSString baseFilename;
- (void).cxx_destruct;
- (unsigned long long)numberOfDataFrames;
- (id)dataFrameAtIndex:;
- (id)dataFrames;
- (void)setDataFrames:;
- (id)mappedFiles;
- (void)setMappedFiles:;
- (id)baseFilename;
- (void)setBaseFilename:;
+ (id)dataFrameStorageFromPath:error:;
@end
