@interface AWENearbySkyLightMoveGuideIconSloganView : UIView
@property (nonatomic) AWENearbyLynxContainerView lynxContainerView;
@property (nonatomic) <AWENearbySkyLightElementViewActionDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lynxContainerView;
- (void)lynxContainerDidFirstScreen:;
- (void)lynxContainer:didFinishLoadWithURL:;
- (void)lynxContainer:didLoadFailedWithUrl:error:;
- (void)setLynxContainerView:;
- (void)trackShowAnimated:params:;
- (void)trackSkylightHidden;
- (unsigned long long)elementViewType;
- (void)configWithGuideModel:;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
