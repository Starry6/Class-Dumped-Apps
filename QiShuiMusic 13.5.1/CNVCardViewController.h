@interface CNVCardViewController : UIViewController
@property (nonatomic) NSArray contacts;
@property (nonatomic) <CNVCardViewControllerDelegate> delegate;
@property (nonatomic) CNContactNavigationController contactNavigationController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setContacts:;
- (id)contacts;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)contactNavigationControllerDidComplete:;
- (void)contactNavigationControllerDidCancel:;
- (id)contactNavigationController:contactViewControllerForContact:preferredMode:;
- (id)initWithVCardData:;
- (id)contactNavigationController;
@end
