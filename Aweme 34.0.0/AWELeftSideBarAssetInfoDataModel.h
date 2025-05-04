@interface AWELeftSideBarAssetInfoDataModel : MTLModel
@property (nonatomic) AWELeftSideBarAssetTipsInfoDataModel tipsInfoModel;
@property (nonatomic) NSArray entryModels;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)entryModels;
- (void)setEntryModels:;
- (id)tipsInfoModel;
- (void)setTipsInfoModel:;
- (id)description;
- (void).cxx_destruct;
+ (id)entryModelsJSONTransformer;
+ (id)tipsInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
