@interface AWEDesktopSystemPopupGuideViewManager : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)showPopupGuideViewWithModel:actionDelegate:dismissCompletion:;
- (id)showPopupGuideViewWithModel:actionDelegate:controller:dismissCompletion:;
- (void)startPictureInPictureWithModel:;
@end
