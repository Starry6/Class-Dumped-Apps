@interface AWELivePluginAdapterLiveMarkView : UIView
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMarkLayerGradientColor:;
- (void)startAnimationWithView:showLiveTag:withURLs:type:interval:showColorGradient:;
- (void)startAnimationWithView:withURLs:showLiveTag:;
- (void)startAnimationWithView:showLiveTag:type:;
- (void)stopAnimationWithView:;
- (void)adjustSkylightAnimationLayerFrame;
- (void)startNewBreatheAnimationWithView:syncStartTime:;
- (void)startSlowerAnimationWithView:syncStartTime:;
- (void)setMarkLayerGradientColorWithType:;
- (void)startAnimationWithView:showLiveTag:withURLs:type:interval:;
- (void)startOuterCircleBreatheAnimationWithView:syncStartTime:;
- (void)startAnimationWithView:showLiveTag:;
- (void)startAnimationWithView:showLiveTag:withURLs:type:interval:viewAnimationScale:maskAnimationScale:;
- (void)startAnimationWithView:;
- (void)setStaticLiveStyle:showLiveTag:;
- (BOOL)isPlaying;
- (void)encodeWithCoder:;
- (void)setIsPlaying:;
@end
