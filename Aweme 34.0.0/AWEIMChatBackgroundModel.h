@interface AWEIMChatBackgroundModel : MTLModel
@property (nonatomic) NSString imageURI;
@property (nonatomic) NSString imageURL;
@property (nonatomic) NSString oid;
@property (nonatomic) NSString skey;
@property (nonatomic) NSString md5;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)skey;
- (void)setSkey:;
- (id)getContentDict;
- (BOOL)isValidV2;
- (BOOL)isValidRealV2;
- (id)initWithResponseV1:responseV2:;
- (id)imageURL;
- (void).cxx_destruct;
- (void)setImageURL:;
- (void)setMd5:;
- (id)md5;
- (id)jsonString;
- (id)initWithJsonString:;
- (id)imageURI;
- (void)setImageURI:;
- (id)oid;
- (void)setOid:;
+ (id)JSONKeyPathsByPropertyKey;
@end
