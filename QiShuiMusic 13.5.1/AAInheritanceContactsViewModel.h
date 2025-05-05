@interface AAInheritanceContactsViewModel : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)fetchSuggestedBeneficiaries:;
- (void)fetchBeneficiaries:;
- (void)fetchBenefactors:;
- (void)_fetchInvitationStatuses:;
- (void)_fetchInvitations:;
- (id)_localBeneficiaries:invitationStatuses:;
- (id)_localBenefactors:;
- (id)_localContact:;
@end
