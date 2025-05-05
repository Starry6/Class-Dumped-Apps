@interface CNContactCreateNewContactAction : CNContactAction
@property (nonatomic) CNContact createdContact;
@property (nonatomic) UIViewController presentingViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)presentingViewController;
- (void)setPresentingViewController:;
- (void).cxx_destruct;
- (void)contactViewController:didCompleteWithContact:;
- (void)performActionWithSender:;
- (id)createdContact;
- (void)setCreatedContact:;
@end
