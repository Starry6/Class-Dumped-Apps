@interface AWELeftSideBarWalletInfoDataModel : AWELeftSideBarAssetInfoDataModel
@property (nonatomic) AWELeftSideBarWalletEyeInfoDataModel assetsEyeModel;
- (id)assetsEyeModel;
- (void)setAssetsEyeModel:;
- (id)description;
- (void).cxx_destruct;
+ (id)assetsEyeModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
