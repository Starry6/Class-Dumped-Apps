@interface AWEDiskDegrader : NSObject
@property (nonatomic) Q degradation;
@property (nonatomic) NSObject<OS_dispatch_queue> degradationQueue;
@property (nonatomic) BOOL isCache;
- (id)initWithDegradation:isCache:;
- (void)startDegradation;
- (id)degradationQueue;
- (void)degradeInternal;
- (unsigned long long)countWrittenFilesWithPath:;
- (void)writeDegradationFileWithPath:size:;
- (void)__cleanLegacyDegradationFileWithPath:;
- (unsigned long long)degradation;
- (void)setDegradation:;
- (void)setDegradationQueue:;
- (void)clear;
- (void).cxx_destruct;
- (BOOL)isCache;
- (void)setIsCache:;
@end
