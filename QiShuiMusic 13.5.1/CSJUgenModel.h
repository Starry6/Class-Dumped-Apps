@interface CSJUgenModel : NSObject
@property (nonatomic) NSString ugenId;
@property (nonatomic) NSString md5;
@property (nonatomic) NSString url;
@property (nonatomic) NSString extra;
@property (nonatomic) q scene;
- (BOOL)isEcommerce;
- (BOOL)isImageContactLandingPage;
- (BOOL)isLuSearch;
- (void)setExtra:;
- (void)setUgenId:;
- (void)setupDataWithDictionary:;
- (id)ugenId;
- (id)extra;
- (id)url;
- (void)setScene:;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (long long)scene;
- (void)setUrl:;
- (void)encodeWithCoder:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)md5;
- (void)setMd5:;
@end
