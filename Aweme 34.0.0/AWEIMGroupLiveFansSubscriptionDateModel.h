@interface AWEIMGroupLiveFansSubscriptionDateModel : AWEBaseApiModel
@property (nonatomic) NSString belongCid;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString groupOwnerUid;
@property (nonatomic) NSArray tags;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)secUid;
- (void)setSecUid:;
- (id)groupOwnerUid;
- (void)setGroupOwnerUid:;
- (id)belongCid;
- (void)setBelongCid:;
- (id)bizInfoModel;
- (id)tags;
- (void)setTags:;
- (void).cxx_destruct;
+ (id)tagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
