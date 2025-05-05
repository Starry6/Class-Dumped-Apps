@interface CNContactIgnoreDonatedInformationAction : CNContactAction
@property (nonatomic) CNUIExternalComponentsFactory componentsFactory;
@property (nonatomic) CNDonationStore donationStore;
- (id)initWithContact:;
- (id)donationStore;
- (void).cxx_destruct;
- (id)componentsFactory;
- (void)performActionWithSender:;
- (id)initWithContact:donationStore:componentsFactory:;
- (BOOL)rejectAllDonations;
- (void)showRejectionFailureAlert;
@end
