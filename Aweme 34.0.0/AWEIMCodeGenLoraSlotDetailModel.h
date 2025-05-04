@interface AWEIMCodeGenLoraSlotDetailModel : AWEBaseDataModel
@property (nonatomic) q userId;
@property (nonatomic) q roleType;
@property (nonatomic) NSString modelId;
@property (nonatomic) q slotCreateTime;
@property (nonatomic) NSString extra;
- (void)setExtra:;
- (void)setRoleType:;
- (long long)roleType;
- (long long)slotCreateTime;
- (void)setSlotCreateTime:;
- (void)setModelId:;
- (long long)userId;
- (id)extra;
- (void).cxx_destruct;
- (id)modelId;
- (void)setUserId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
