@interface AWECodeGenGofeedBizStructV2Model : AWEBaseDataModel
@property (nonatomic) NSString itemRecallSource;
@property (nonatomic) NSArray mediumBannerListModelArray;
- (id)itemRecallSource;
- (id)mediumBannerListModelArray;
- (void)setItemRecallSource:;
- (void)setMediumBannerListModelArray:;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
