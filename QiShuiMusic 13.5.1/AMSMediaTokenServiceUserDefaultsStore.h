@interface AMSMediaTokenServiceUserDefaultsStore : NSObject
@property (nonatomic) NSString clientIdentifier;
- (id)initWithClientIdentifier:;
- (BOOL)storeToken:;
- (void).cxx_destruct;
- (id)retrieveToken;
- (id)clientIdentifier;
@end
