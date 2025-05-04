@interface AWECodeGenClaInfoModel : AWEBaseDataModel
@property (nonatomic) NSArray listModelArray;
@property (nonatomic) AWECodeGenOriginalLanguageInfoModel originalLanguageInfoModel;
- (id)originalLanguageInfoModel;
- (id)listModelArray;
- (void)setListModelArray:;
- (void)setOriginalLanguageInfoModel:;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
