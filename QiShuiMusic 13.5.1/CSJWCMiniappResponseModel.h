@interface CSJWCMiniappResponseModel : NSObject
@property (nonatomic) NSString scheme;
@property (nonatomic) NSString userName;
@property (nonatomic) NSString path;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)validSchemeInfo;
- (BOOL)validOpenSDKInfo;
- (id)path;
- (id)toDictionary;
- (void)setScheme:;
- (id)userName;
- (id)scheme;
- (void)setPath:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setUserName:;
- (void).cxx_destruct;
+ (id)fromDictionary:;
@end
