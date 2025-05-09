@interface INSearchForBillsIntent : INIntent
@property (nonatomic) INBillPayee billPayee;
@property (nonatomic) INDateComponentsRange paymentDateRange;
@property (nonatomic) q billType;
@property (nonatomic) q status;
@property (nonatomic) INDateComponentsRange dueDateRange;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStatus:;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:;
- (long long)status;
- (id)domain;
- (void)setDomain:;
- (id)_metadata;
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:containingAppBundleId:;
- (id)verb;
- (void)setVerb:;
- (id)parametersByName;
- (void)setParametersByName:;
- (id)billPayee;
- (void)setBillPayee:;
- (long long)billType;
- (void)setBillType:;
- (id)dueDateRange;
- (void)setDueDateRange:;
- (id)paymentDateRange;
- (void)setPaymentDateRange:;
- (id)initWithBillPayee:paymentDateRange:billType:status:dueDateRange:;
@end
