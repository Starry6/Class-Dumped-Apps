@interface UIKeyboardHiddenViewController_Autofill : UIKeyboardHiddenViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)presentViewController:;
- (BOOL)isValidedString:;
- (id)customInfoFromCredential:;
- (void)setAutofillVC:;
- (void)passwordViewController:selectedCredential:;
@end
