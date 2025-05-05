@interface BDTokenCert : NSObject
@property (nonatomic) NSDictionary businessCustomInfo;
@property (nonatomic) NSString authInfoKey;
@property (nonatomic) NSString uniqueToken;
@property (nonatomic) @? token;
@property (nonatomic) @? auth;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)authKey;
- (void)setAuthInfoKey:;
- (void)attachCustomInfo:;
- (id)authInfoKey;
- (id)businessCustomInfo;
- (id)certParams;
- (id)certToken;
- (void)setBusinessCustomInfo:;
- (id)validateWithContext:;
- (id)token;
- (void).cxx_destruct;
- (id)uniqueToken;
- (id)customInfo;
- (void)setUniqueToken:;
- (id)auth;
- (id)certType;
+ (id)instanceWithToken:;
+ (id)create;
@end
