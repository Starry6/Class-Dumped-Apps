@interface AASetupAssistantSetupDelegatesResponse : AAResponse
@property (nonatomic) NSNumber status;
@property (nonatomic) NSString statusMessage;
@property (nonatomic) NSDictionary responseParameters;
@property (nonatomic) NSString dsid;
- (id)dsid;
- (id)status;
- (id)statusMessage;
- (id)responseParametersForServiceIdentifier:;
- (id)responseParameters;
@end
