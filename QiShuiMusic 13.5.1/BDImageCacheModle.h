@interface BDImageCacheModle : NSObject
@property (nonatomic) NSString bizTag;
@property (nonatomic) Q imageCount;
@property (nonatomic) Q memoryCount;
@property (nonatomic) Q diskCount;
- (id)initWithBizTag:;
- (void)setMemoryCount:;
- (id)bizTag;
- (id)dataFromParam;
- (unsigned long long)diskCount;
- (unsigned long long)memoryCount;
- (void)setBizTag:;
- (void)setDiskCount:;
- (id)init;
- (unsigned long long)imageCount;
- (void).cxx_destruct;
- (void)reset;
- (void)setImageCount:;
@end
