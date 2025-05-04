@interface AWEAVPlayerWrapperConfig : NSObject
@property (nonatomic) BOOL AWEAVPlayerWrapperDisableKVO;
@property (nonatomic) BOOL enableAsyncOptimize;
- (BOOL)AWEAVPlayerWrapperDisableKVO;
- (void)setAWEAVPlayerWrapperDisableKVO:;
- (BOOL)enableAsyncOptimize;
- (void)setEnableAsyncOptimize:;
@end
