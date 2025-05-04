@interface AWEACCAlertControllerImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showAlertWithTitle:message:preferredStyle:cancelButtonTitle:destructiveButtonTitle:otherButtonTitles:tapBlock:;
- (void)showAlertController:;
@end
