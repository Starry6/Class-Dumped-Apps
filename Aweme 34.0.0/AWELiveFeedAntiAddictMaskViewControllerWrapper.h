@interface AWELiveFeedAntiAddictMaskViewControllerWrapper : NSObject
@property (nonatomic) UIViewController<AWEAntiAddictMaskViewControllerProtocol> targetViewController;
@property (nonatomic) <IESLiveFeedAntiAddictMaskViewControllerWrapperDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didDisplay;
- (void)setTargetViewController:;
- (void)didTrackStayTimeWithParams:;
- (void)didTrackClickWithParams:;
- (id)init;
- (void)play;
- (id)delegate;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)reset;
- (void)setDelegate:;
- (void)didEndDisplaying;
- (void)setupContext;
- (void)willDisplay;
- (id)targetViewController;
@end
