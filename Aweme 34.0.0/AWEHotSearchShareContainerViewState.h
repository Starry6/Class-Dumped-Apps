@interface AWEHotSearchShareContainerViewState : NSObject
@property (nonatomic) BOOL hasLoadData;
@property (nonatomic) BOOL hasReceiveRenderFinish;
@property (nonatomic) BOOL hasReceiveRenderError;
@property (nonatomic) BOOL hasNetworkLoadFail;
@property (nonatomic) BOOL isPreloading;
@property (nonatomic) BOOL isAdjustingScrollOffset;
@property (nonatomic) q frameCount;
@property (nonatomic) q targetFrame;
- (void)setIsPreloading:;
- (BOOL)hasLoadData;
- (void)setHasLoadData:;
- (void)setHasNetworkLoadFail:;
- (void)setHasReceiveRenderFinish:;
- (void)setHasReceiveRenderError:;
- (BOOL)hasReceiveRenderFinish;
- (BOOL)hasReceiveRenderError;
- (BOOL)hasNetworkLoadFail;
- (BOOL)isAdjustingScrollOffset;
- (void)setIsAdjustingScrollOffset:;
- (long long)frameCount;
- (void)setFrameCount:;
- (long long)targetFrame;
- (BOOL)isPreloading;
@end
