@interface AWEBottomViewConfigModel : MTLModel
@property (nonatomic) NSString leftImage;
@property (nonatomic) NSString bgImage;
@property (nonatomic) NSString bgColor;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString textBtn;
@property (nonatomic) NSString colorBtn;
@property (nonatomic) NSString bgColorBtn;
@property (nonatomic) NSString bdColorBtn;
@property (nonatomic) NSString bdWidthButton;
@property (nonatomic) NSString schema;
@property (nonatomic) NSArray eventModels;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)eventModels;
- (id)textBtn;
- (void)setTextBtn:;
- (id)colorBtn;
- (void)setColorBtn:;
- (id)bgColorBtn;
- (void)setBgColorBtn:;
- (id)bdColorBtn;
- (void)setBdColorBtn:;
- (id)bdWidthButton;
- (void)setBdWidthButton:;
- (void)setEventModels:;
- (id)schema;
- (void)setSchema:;
- (void)setSubTitle:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)leftImage;
- (void)setLeftImage:;
- (id)bgColor;
- (void)setBgColor:;
- (id)bgImage;
- (void)setBgImage:;
+ (id)eventModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
