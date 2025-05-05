@interface CNUnknownContactsController : NSObject
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) NSArray contacts;
@property (nonatomic) UIViewController displayedController;
@property (nonatomic) <CNUnknownContactsControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)contacts;
- (void)setDelegate:;
- (id)viewController;
- (id)delegate;
- (void).cxx_destruct;
- (id)contactStore;
- (BOOL)contactViewController:shouldPerformDefaultActionForContactProperty:;
- (void)contactViewController:didCompleteWithContact:;
- (id)displayedController;
- (BOOL)multipleUnknownContactsViewController:shouldPerformDefaultActionForContactProperty:;
- (void)multipleUnknownContactsViewControllerDidComplete:;
- (id)initWithContacts:contactStore:;
- (void)setDisplayedController:;
+ (id)descriptorForRequiredKeys;
@end
