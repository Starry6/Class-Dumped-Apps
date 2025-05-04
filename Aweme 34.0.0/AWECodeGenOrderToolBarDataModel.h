@interface AWECodeGenOrderToolBarDataModel : AWEBaseDataModel
@property (nonatomic) NSString toolBarText;
@property (nonatomic) NSString skipDescText;
@property (nonatomic) AWECodeGenUrlModel iconLightModel;
@property (nonatomic) AWECodeGenUrlModel iconDarkModel;
@property (nonatomic) NSString buttonText;
@property (nonatomic) NSString schema;
- (id)toolBarText;
- (void)setToolBarText:;
- (id)skipDescText;
- (void)setSkipDescText:;
- (id)iconLightModel;
- (void)setIconLightModel:;
- (id)iconDarkModel;
- (void)setIconDarkModel:;
- (id)schema;
- (void)setSchema:;
- (id)buttonText;
- (void).cxx_destruct;
- (void)setButtonText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
