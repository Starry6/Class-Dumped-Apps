@interface APSURLToken : NSObject
@property (nonatomic) NSString tokenURL;
@property (nonatomic) NSData token;
- (id)token;
- (id)initWithDictionary:;
- (id)tokenURL;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setTokenURL:;
- (void)setToken:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithTokenURL:token:;
+ (BOOL)supportsSecureCoding;
@end
