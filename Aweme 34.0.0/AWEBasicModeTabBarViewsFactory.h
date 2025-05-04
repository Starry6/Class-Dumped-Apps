@interface AWEBasicModeTabBarViewsFactory : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)customButtonWithInnerView:viewController:type:;
- (id)tabBarButtonWithText:image:selectedImage:viewController:type:;
- (id)innerViewWithText:image:selectedImage:;
- (void)updateInnerViewShadow:;
@end
