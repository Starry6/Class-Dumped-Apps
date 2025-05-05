@interface AAContactsProvider : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)fetchCustodiansAndBeneficiaries:;
- (void)fetchCustodianshipsAndBenefactors:;
- (void)fetchSuggestedCustodians:;
- (void)fetchMyCustodians:;
- (void)fetchMyHealthyCustodians:;
- (void)fetchMyCustodianshipOwners:;
- (void)fetchSuggestedBeneficiaries:;
- (void)fetchMyBeneficiaries:;
- (void)fetchMyBenefactors:;
- (id)_localContactsForCustodians:;
- (id)_localContactsForCustodianshipOwners:;
- (id)_localContactForHandle:;
@end
