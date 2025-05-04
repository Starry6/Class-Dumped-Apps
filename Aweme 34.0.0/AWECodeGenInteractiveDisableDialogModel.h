@interface AWECodeGenInteractiveDisableDialogModel : AWEBaseDataModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSArray disableButtonsModelArray;
- (id)disableButtonsModelArray;
- (void)setDisableButtonsModelArray:;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
