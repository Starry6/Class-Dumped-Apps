@interface AWESCAlertServiceImp : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showAlertOn:title:subTitle:actions:canDismissByClickMask:needCloseIcon:closeBlock:;
- (void)showAlertOn:title:subTitle:actions:canDismissByClickMask:animateLoop:image:needCloseIcon:forceShowImageInLandScape:closeBlock:completion:;
- (void)showAlertOn:title:subTitle:actions:canDismissByClickMask:animateLoop:image:needCloseIcon:forceShowImageInLandScape:closeBlock:;
- (unsigned long long)changeDuxUseFrom:;
- (void)showAlertOn:title:subTitle:actions:;
@end
