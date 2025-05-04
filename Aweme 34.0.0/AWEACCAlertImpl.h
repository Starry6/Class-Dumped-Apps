@interface AWEACCAlertImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showAlertWithTitle:description:image:actionButtonTitle:cancelButtonTitle:actionBlock:cancelBlock:;
- (void)showAlertController:animated:;
- (id)alertActionWithTitle:style:font:handler:;
- (void)showAlertController:fromView:;
- (id)alertView;
- (id)alertActionWithTitle:style:handler:;
@end
