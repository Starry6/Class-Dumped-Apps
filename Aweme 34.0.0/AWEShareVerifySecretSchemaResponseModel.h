@interface AWEShareVerifySecretSchemaResponseModel : MTLModel
@property (nonatomic) Q st;
@property (nonatomic) NSString msg;
@property (nonatomic) BOOL isPassVerified;
@property (nonatomic) NSArray unsafeIds;
@property (nonatomic) NSArray unsafeParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSt:;
- (BOOL)isPassVerified;
- (void)setIsPassVerified:;
- (id)unsafeIds;
- (void)setUnsafeIds:;
- (id)unsafeParams;
- (void)setUnsafeParams:;
- (void).cxx_destruct;
- (unsigned long long)st;
- (void)setMsg:;
- (id)msg;
+ (id)JSONKeyPathsByPropertyKey;
@end
