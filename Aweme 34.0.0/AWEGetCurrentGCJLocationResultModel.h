@interface AWEGetCurrentGCJLocationResultModel : IESLiveBridgeModel
@property (nonatomic) q permission;
@property (nonatomic) AWEGetCurrentGCJLocationDataModel data;
- (long long)permission;
- (void)setPermission:;
- (void)setData:;
- (void).cxx_destruct;
- (id)data;
+ (id)modelCustomPropertyMapper;
@end
