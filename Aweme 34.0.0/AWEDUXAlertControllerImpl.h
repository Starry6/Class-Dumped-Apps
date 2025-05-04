@interface AWEDUXAlertControllerImpl : NSObject
@property (nonatomic) @? dismissedBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)alertDialogDidDismiss:;
- (void)setDismissedBlock:;
- (id)dismissedBlock;
- (id)showAlertWithTitle:description:image:actionButtonTitle:cancelButtonTitle:actionBlock:cancelBlock:dismissedBlock:;
- (id)showAlertWithTitle:description:image:forbidDismissByClickMask:actionButtonTitle:cancelButtonTitle:actionBlock:cancelBlock:dismissedBlock:;
- (id)showAlertWithTitle:body:image:actionButtonTitle:cancelButtonTitle:actionBlock:cancelBlock:dismissedBlock:;
- (id)showAlertWithTitle:description:image:forbidDismissByClickMask:actionButtonTitle:cancelButtonTitle:actionBlock:cancelBlock:dismissedBlock:onViewController:;
- (void)dealloc;
- (void).cxx_destruct;
@end
