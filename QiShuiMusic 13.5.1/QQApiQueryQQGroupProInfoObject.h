@interface QQApiQueryQQGroupProInfoObject : QQApiObject
@property (nonatomic) NSString appid;
@property (nonatomic) NSString org_id;
@property (nonatomic) NSString world_id;
@property (nonatomic) NSString openKey;
@property (nonatomic) NSString openID;
- (id)openKey;
- (BOOL)hasNilField;
- (id)openID;
- (id)org_id;
- (id)queryURLString;
- (void)setOpenID:;
- (void)setOpenKey:;
- (void)setOrg_id:;
- (void)setWorld_id:;
- (id)world_id;
- (id)appid;
- (void)setAppid:;
@end
