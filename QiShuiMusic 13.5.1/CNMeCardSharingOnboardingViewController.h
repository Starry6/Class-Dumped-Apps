@interface CNMeCardSharingOnboardingViewController : OBTableWelcomeController
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) CNContact contact;
@property (nonatomic) NSLayoutConstraint tableViewHeightConstraint;
@property (nonatomic) OBBoldTrayButton confirmButton;
- (void)setContactStore:;
- (id)contact;
- (void)setContact:;
- (void).cxx_destruct;
- (id)contactStore;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)handleConfirmButtonTapped;
- (id)confirmButtonTitle;
- (id)tableViewHeightConstraint;
- (void)setTableViewHeightConstraint:;
- (id)confirmButton;
- (void)setConfirmButton:;
- (void)didTapDoneButton:;
- (void)updateForContentSizeCategoryChange;
+ (id)headerText;
@end
