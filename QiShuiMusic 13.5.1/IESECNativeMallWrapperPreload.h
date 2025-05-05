@interface IESECNativeMallWrapperPreload : NSObject
@property (nonatomic) IESECNativeMallWrapperViewController wrapper;
- (void)preloadWrapper:;
- (id)consumeCurrentPreloadWrapper;
- (void).cxx_destruct;
- (id)wrapper;
- (void)setWrapper:;
+ (id)shareInstance;
@end
