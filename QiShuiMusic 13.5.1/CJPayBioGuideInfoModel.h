@interface CJPayBioGuideInfoModel : JSONModel
@property (nonatomic) NSString title;
@property (nonatomic) BOOL choose;
@property (nonatomic) NSString bioType;
@property (nonatomic) NSString guideStyle;
@property (nonatomic) NSString btnDesc;
@property (nonatomic) BOOL isShowButton;
@property (nonatomic) BOOL defaultHidden;
- (id)bioType;
- (id)btnDesc;
- (BOOL)defaultHidden;
- (id)guideStyle;
- (BOOL)isShowButton;
- (void)setBioType:;
- (void)setBtnDesc:;
- (void)setChoose:;
- (void)setDefaultHidden:;
- (void)setGuideStyle:;
- (void)setIsShowButton:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (BOOL)choose;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
