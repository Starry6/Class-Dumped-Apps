@interface AATrustedContactDetailsViewModelFactory : NSObject
- (id)viewModelForFlow:withContact:;
- (void)prepareForMyCustodianFlow:withContact:;
- (void)prepareForCustodianForFlow:withContact:;
- (void)prepareForMyBeneficiaryFlow:withContact:;
- (void)prepareForMyBenefactorFlow:withContact:;
@end
