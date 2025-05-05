@interface AACustodianSetupRequestContext : NSObject
@property (nonatomic) NSString handle;
@property (nonatomic) NSString custodianSetupToken;
@property (nonatomic) NSString contactID;
- (id)handle;
- (id)contactID;
- (id)initWithCoder:;
- (void)setContactID:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)custodianSetupToken;
- (id)initWithHandle:authResults:;
- (void)_parseAuthResults:;
+ (BOOL)supportsSecureCoding;
@end
