@interface AWELiveCommercialLynxLandingPageHandler : NSObject
@property (nonatomic) NSMapTable popupViewControllerMap;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)rifleView:didEnterStatus:;
- (void)handleViewDidAppear:;
- (void)handleViewDidDisappear:;
- (void)rifleView:willLeaveStatus:;
- (BOOL)isHorizonAppearing;
- (void)rifleViewvDidFirstScreen:;
- (void)rifleView:didLoadFailedWithURL:error:;
- (BOOL)openLynxURL:adInfo:queries:liveInfo:;
- (id)popupViewControllerMap;
- (id)addAdExtraDataInformation:withSchema:;
- (id)floatingLiveViewOfRifleView:;
- (void)animateFloatingLiveView:isIn:;
- (void)rifleView:closeWithparams:;
- (void)setPopupViewControllerMap:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
