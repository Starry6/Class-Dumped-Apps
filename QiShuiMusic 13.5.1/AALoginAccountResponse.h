@interface AALoginAccountResponse : AAResponse
@property (nonatomic) NSNumber status;
@property (nonatomic) NSString statusMessage;
@property (nonatomic) NSDictionary responseForDelegates;
@property (nonatomic) NSString dsid;
@property (nonatomic) AALoginResponseAppleAccountInfo appleAccountInfo;
@property (nonatomic) AALoginResponseiCloudTokens iCloudTokens;
@property (nonatomic) AALoginResponseDataclasses dataclasses;
- (id)dsid;
- (id)initWithHTTPResponse:data:;
- (void).cxx_destruct;
- (id)status;
- (id)statusMessage;
- (id)initWithHttpStatus:responseBody:;
- (void)_parseResponse:responseBody:;
- (id)responseParametersForServiceIdentifier:;
- (id)convertToProvisioningResponse;
- (id)convertToLoginDelegatesResponse;
- (id)responseForDelegates;
- (id)appleAccountInfo;
- (id)iCloudTokens;
- (id)dataclasses;
@end
