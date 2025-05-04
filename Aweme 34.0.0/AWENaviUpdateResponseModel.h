@interface AWENaviUpdateResponseModel : MTLModel
@property (nonatomic) q code;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) NSString message;
@property (nonatomic) NSString avatarId;
@property (nonatomic) q version;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (id)avatarId;
- (void)setAvatarId:;
- (long long)code;
- (id)message;
- (void)setCode:;
- (id)extra;
- (long long)version;
- (void)setVersion:;
- (void).cxx_destruct;
- (void)setMessage:;
+ (id)JSONKeyPathsByPropertyKey;
@end
