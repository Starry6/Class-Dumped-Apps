@interface AWECodeGenFunctionBanPopupModel : AWEBaseDataModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) NSArray buttonsModelArray;
- (id)buttonsModelArray;
- (void)setButtonsModelArray:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
