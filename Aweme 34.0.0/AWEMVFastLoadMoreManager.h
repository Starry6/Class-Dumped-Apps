@interface AWEMVFastLoadMoreManager : NSObject
@property (nonatomic) NSMutableArray buffer;
@property (nonatomic) BOOL isBufferEmpty;
@property (nonatomic) NSArray bufferModels;
@property (nonatomic) q bufferSize;
- (void)updateBuffer:;
- (id)bufferModels;
- (id)buffer;
- (void)setBuffer:;
- (long long)bufferSize;
- (void).cxx_destruct;
- (BOOL)isBufferEmpty;
+ (id)sharedManager;
@end
