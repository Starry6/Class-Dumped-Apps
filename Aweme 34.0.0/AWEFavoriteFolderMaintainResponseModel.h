@interface AWEFavoriteFolderMaintainResponseModel : AWEBaseApiModel
@property (nonatomic) AWEFavoriteFolderBaseInfoModel baseInfoModel;
- (id)baseInfoModel;
- (void)setBaseInfoModel:;
- (void).cxx_destruct;
+ (id)baseInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
