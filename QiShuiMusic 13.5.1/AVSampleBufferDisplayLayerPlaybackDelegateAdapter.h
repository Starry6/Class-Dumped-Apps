@interface AVSampleBufferDisplayLayerPlaybackDelegateAdapter : NSObject
@property (nonatomic) <AVPictureInPictureSampleBufferPlaybackDelegate> playbackDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)playbackDelegate;
- (void).cxx_destruct;
- (void)pictureInPictureController:setPlaying:;
- (id)pictureInPictureControllerTimeRangeForPlayback:;
- (BOOL)pictureInPictureControllerIsPlaybackPaused:;
- (void)pictureInPictureController:didTransitionToRenderSize:;
- (void)pictureInPictureController:skipByInterval:completionHandler:;
+ (id)playbackDelegateAdapterWithDelegate:;
@end
