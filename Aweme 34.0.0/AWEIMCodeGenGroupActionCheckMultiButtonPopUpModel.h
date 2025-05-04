@interface AWEIMCodeGenGroupActionCheckMultiButtonPopUpModel : AWEBaseDataModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSArray buttonsModelArray;
- (id)buttonsModelArray;
- (void)setButtonsModelArray:;
- (id)subtitle;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
