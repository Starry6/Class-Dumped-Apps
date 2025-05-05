@interface CJPaySkipPwdGuideInfoModel : CJPayBaseGuideInfoModel
@property (nonatomic) BOOL isChecked;
@property (nonatomic) BOOL isSelectedManually;
@property (nonatomic) BOOL isShowButton;
@property (nonatomic) NSString guideType;
@property (nonatomic) NSArray<BDPaySkipPwdSubGuideInfoModel> subGuide;
@property (nonatomic) q quota;
@property (nonatomic) NSString guideStyle;
- (id)guideStyle;
- (id)guideType;
- (BOOL)isSelectedManually;
- (BOOL)isShowButton;
- (void)setGuideStyle:;
- (void)setGuideType:;
- (void)setIsSelectedManually:;
- (void)setIsShowButton:;
- (void)setSubGuide:;
- (id)subGuide;
- (void)setQuota:;
- (void).cxx_destruct;
- (long long)quota;
- (BOOL)isChecked;
- (void)setIsChecked:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
