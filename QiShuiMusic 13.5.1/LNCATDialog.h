@interface LNCATDialog : LNDialog
@property (nonatomic) NSData securityScopeData;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSURL templateDirectoryURL;
@property (nonatomic) NSDictionary parameters;
- (void)getResultWithCompletionHandler:;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)parameters;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithIdentifier:templateDirectoryURL:parameters:localeIdentifier:;
- (id)templateDirectoryURL;
- (id)securityScopeData;
- (void)setSecurityScopeData:;
+ (BOOL)supportsSecureCoding;
@end
