@interface AWECodeGenTheaterGuideBarConfigModel : AWEBaseDataModel
@property (nonatomic) AWECodeGenUrlModel backgroundModel;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString buttonText;
@property (nonatomic) NSString name;
- (void)setBackgroundModel:;
- (id)schema;
- (void)setSchema:;
- (void)setSubTitle:;
- (id)subTitle;
- (id)buttonText;
- (void).cxx_destruct;
- (id)title;
- (void)setName:;
- (id)name;
- (void)setTitle:;
- (void)setButtonText:;
- (id)backgroundModel;
+ (id)JSONKeyPathsByPropertyKey;
@end
