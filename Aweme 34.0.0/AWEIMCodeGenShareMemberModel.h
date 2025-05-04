@interface AWEIMCodeGenShareMemberModel : AWEBaseDataModel
@property (nonatomic) NSInteger convType;
@property (nonatomic) q uid;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString convId;
@property (nonatomic) NSInteger bizType;
@property (nonatomic) NSDictionary extra;
- (void)setExtra:;
- (id)secUid;
- (int)bizType;
- (void)setBizType:;
- (id)convId;
- (int)convType;
- (void)setConvId:;
- (void)setConvType:;
- (void)setSecUid:;
- (void)setUid:;
- (unsigned long long)hash;
- (long long)uid;
- (id)extra;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;
@end
