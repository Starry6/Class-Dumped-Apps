@interface IESECChooseContactResultModel : IESLiveBridgeModel
@property (nonatomic) q permission;
@property (nonatomic) IESECChooseContactDataModel data;
- (long long)permission;
- (void)setPermission:;
- (id)data;
- (void).cxx_destruct;
- (void)setData:;
+ (id)modelCustomPropertyMapper;
@end
