@interface HunterVideoAWEPlayVideoViewControllerStatusDelegate : NSObject
@property (nonatomic) HunterVideoView hunterVideoView;
@property (nonatomic) <HunterVideoViewDelegate> delegate;
@property (nonatomic) <AWEPlayVideoViewControllerStatusDelegate> businessDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)businessDelegate;
- (void)setBusinessDelegate:;
- (void)videoController:playerPlayTime:canPlayTime:totalTime:;
- (void)videoUpdatePlayerControllerWithPlayVideoVC:;
- (void)videoUpdatePlayerControllerWithPlayState:;
- (void)videoUpdatePlayerControllerWithNewPlayState:;
- (void)setHunterVideoView:;
- (id)hunterVideoView;
- (id)delegate;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (void)setDelegate:;
- (id)methodSignatureForSelector:;
@end
