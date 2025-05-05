@interface CNContactOrbHeaderViewController : UIViewController
@property (nonatomic) NSArray contacts;
@property (nonatomic) CNContactOrbHeaderView headerView;
- (void)setHeaderView:;
- (void)setContacts:;
- (id)contacts;
- (id)headerView;
- (void).cxx_destruct;
- (void)viewWillAppear:;
- (void)viewDidLoad;
- (id)initWithContacts:;
- (double)suggestedHeaderWidth;
@end
