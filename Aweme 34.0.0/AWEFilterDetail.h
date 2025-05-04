@interface AWEFilterDetail : MTLModel
@property (nonatomic) NSString awemeID;
@property (nonatomic) NSString filterReason;
@property (nonatomic) NSString notice;
@property (nonatomic) NSString detailMsg;
@property (nonatomic) NSString icon;
@property (nonatomic) AWEFilterDetailAuthorSecretInfoModel authorSecretInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAwemeID:;
- (id)awemeID;
- (id)filterReason;
- (void)setFilterReason:;
- (void)setDetailMsg:;
- (id)detailMsg;
- (id)authorSecretInfo;
- (void)setAuthorSecretInfo:;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)notice;
- (void)setNotice:;
+ (id)authorSecretInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
