@interface CNMeCardSharingOnboardingAudienceViewController : CNMeCardSharingOnboardingViewController
@property (nonatomic) CNMeCardSharingAudienceDataSource sharingAudienceDataSource;
@property (nonatomic) CNMeCardSharingOnboardingHeaderViewController headerViewController;
@property (nonatomic) <CNMeCardSharingOnboardingAudienceViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)tableView:cellForRowAtIndexPath:;
- (void)setDelegate:;
- (void)contentSizeCategoryDidChange:;
- (id)delegate;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (id)tableView:willSelectRowAtIndexPath:;
- (id)headerViewController;
- (id)tableView:titleForHeaderInSection:;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLoad;
- (id)tableView:titleForFooterInSection:;
- (void)setHeaderViewController:;
- (id)sharingAudienceDataSource;
- (id)initWithSelectedSharingAudience:;
- (void)handleConfirmButtonTapped;
- (void)setSharingAudienceDataSource:;
+ (id)headerText;
@end
