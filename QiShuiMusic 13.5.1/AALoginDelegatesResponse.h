@interface AALoginDelegatesResponse : AAResponse
@property (nonatomic) NSNumber status;
@property (nonatomic) NSString statusMessage;
@property (nonatomic) NSDictionary responseParameters;
@property (nonatomic) NSString dsid;
@property (nonatomic) NSString altDSID;
- (id)dsid;
- (id)altDSID;
- (id)status;
- (id)statusMessage;
- (id)responseParametersForServiceIdentifier:;
- (id)responseParameters;
- (id)augmentedResponseParametersForServiceIdentifier:withAppleID:password:DSID:altDSID:;
@end
