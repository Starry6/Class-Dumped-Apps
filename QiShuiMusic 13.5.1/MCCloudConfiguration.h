@interface MCCloudConfiguration : NSObject
@property (nonatomic) NSDictionary details;
@property (nonatomic) NSDictionary setAsideDetails;
- (id)provisionalEnrollmentExpirationDate;
- (id)diagnosticsUploadURL;
- (id)skipSetupKeys;
- (BOOL)isProvisionallyEnrolled;
- (id)tvProviderUserToken;
- (void)setDetails:;
- (id)language;
- (BOOL)isSupervised;
- (id)mdmVersionProtocol;
- (id)region;
- (BOOL)isAwaitingConfiguration;
- (BOOL)alreadySignedIntoFaceTime;
- (void)refreshDetailsFromDisk;
- (BOOL)isTeslaEnrolled;
- (id)MAIDUsername;
- (BOOL)hasMAIDCredential;
- (id)languageScript;
- (id)details;
- (id)setAsideDetails;
- (void)setSetAsideDetails:;
+ (id)sharedConfiguration;
@end
