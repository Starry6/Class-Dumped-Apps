@interface ICDocCamRenamePrompt : NSObject
@property (nonatomic) NSString existingTitle;
@property (nonatomic) UIAlertAction saveAction;
@property (nonatomic) ICDocCamRenamePrompt strongSelf;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (BOOL)isTitleValid:error:;
- (BOOL)textField:shouldChangeCharactersInRange:replacementString:;
- (void)textFieldChanged:;
- (id)strongSelf;
- (void)setStrongSelf:;
- (void)showFromViewController:completion:;
- (id)initWithExistingTitle:;
- (void)showSingleButtonAlertFromViewController:withTitle:message:;
- (id)stringByScrubbingStringForCollectionName:;
- (void)enableAction:withString:;
- (id)existingTitle;
- (void)setExistingTitle:;
- (id)saveAction;
- (void)setSaveAction:;
@end
