@interface AWENearbySkylightTempoHandler : NSObject
@property (nonatomic) q pageType;
@property (nonatomic) <AWENearbySkyLightElementViewActionDelegate> delegate;
- (void)unregisterSubscriber;
- (id)initWithPageType:;
- (void)registerSubscribes;
- (void)handleLifeServiceIconLayoutInfo:;
- (void)handleOpenNearbyDialog:;
- (void)handleRenderCompleted:;
- (void)handleOnLynxActionDone:;
- (void)handleNearbySwitchFeedStyle:;
- (void)dealloc;
- (id)delegate;
- (void)setPageType:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (long long)pageType;
@end
