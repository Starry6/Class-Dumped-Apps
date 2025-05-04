@interface AWECodeGenEntertainmentBlockCardInfoModel : AWEBaseDataModel
@property (nonatomic) NSString title;
@property (nonatomic) NSArray subTitleArray;
@property (nonatomic) NSArray tipTextArray;
@property (nonatomic) AWECodeGenUrlModel coverUrlModel;
@property (nonatomic) AWECodeGenUrlModel titleIconUrlModel;
@property (nonatomic) NSArray flowBottomButtonsModelArray;
- (id)subTitleArray;
- (id)tipTextArray;
- (id)coverUrlModel;
- (void)setCoverUrlModel:;
- (id)flowBottomButtonsModelArray;
- (void)setSubTitleArray:;
- (void)setTipTextArray:;
- (id)titleIconUrlModel;
- (void)setTitleIconUrlModel:;
- (void)setFlowBottomButtonsModelArray:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
