@interface AWEIMGroupFansClubModel : AWEBaseApiModel
@property (nonatomic) NSString belongCid;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString groupOwnerUid;
@property (nonatomic) q level;
@property (nonatomic) BOOL lightUp;
@property (nonatomic) BOOL enable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)secUid;
- (void)setSecUid:;
- (BOOL)lightUp;
- (id)groupOwnerUid;
- (void)setGroupOwnerUid:;
- (id)belongCid;
- (void)setBelongCid:;
- (id)bizInfoModel;
- (void)setLightUp:;
- (void)setLevel:;
- (BOOL)enable;
- (long long)level;
- (void).cxx_destruct;
- (void)setEnable:;
+ (id)JSONKeyPathsByPropertyKey;
@end
