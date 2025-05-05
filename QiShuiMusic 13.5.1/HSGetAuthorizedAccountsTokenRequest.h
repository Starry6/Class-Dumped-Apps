@interface HSGetAuthorizedAccountsTokenRequest : HSRequest
- (id)canonicalResponseForResponse:;
- (id)initWithDSID:deviceGUID:;
+ (id)requestWithDSID:deviceGUID:;
@end
