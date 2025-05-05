@interface AAiCloudTermsStringRequest : AAGenericTermsUIRequest
- (id)initWithAccount:;
- (id)initWithAccount:preferPassword:;
- (id)initWithAccount:termsEntries:preferPassword:;
+ (Class)responseClass;
@end
