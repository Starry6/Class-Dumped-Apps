@interface VEAVIndexEntry : IESMMObject
@property (nonatomic) NSString filePath;
@property (nonatomic) BOOL enableSearchAVEntriesOpt;
@property (nonatomic) NSInteger maxGopSize;
- (long long)getSampleMinDistance:seekflags:;
- (BOOL)enableSearchAVEntriesOpt;
- (long long)getSampleTimestamp:seekflags:findKeyFrame:;
- (BOOL)loadAllFrameEntry;
- (int)maxGopSize;
- (void)setEnableSearchAVEntriesOpt:;
- (void)setMaxGopSize:;
- (id)filePath;
- (void)dealloc;
- (void)setFilePath:;
- (void).cxx_destruct;
- (id)initWithPath:;
@end
