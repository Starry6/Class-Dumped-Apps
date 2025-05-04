@interface AWECodeGenShootSuggestionModel : AWEBaseDataModel
@property (nonatomic) NSArray suggestImagesModelArray;
@property (nonatomic) NSArray suggestImagesThumbModelArray;
@property (nonatomic) NSString suggestText;
- (id)suggestText;
- (void)setSuggestText:;
- (id)suggestImagesModelArray;
- (void)setSuggestImagesModelArray:;
- (id)suggestImagesThumbModelArray;
- (void)setSuggestImagesThumbModelArray:;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
