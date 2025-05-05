@interface CJPayBioPaymentInfo : JSONModel
@property (nonatomic) BOOL showGuide;
@property (nonatomic) NSString cancelBtnDesc;
@property (nonatomic) NSString openBioDesc;
@property (nonatomic) NSString guideDesc;
@property (nonatomic) NSString bioType;
@property (nonatomic) NSString successDesc;
@property (nonatomic) NSString showType;
@property (nonatomic) NSArray<CJPayBioPaymentSubGuideModel> subGuide;
- (id)bioType;
- (void)setSuccessDesc:;
- (void)setOpenBioDesc:;
- (id)cancelBtnDesc;
- (id)guideDesc;
- (id)openBioDesc;
- (void)setBioType:;
- (void)setCancelBtnDesc:;
- (void)setGuideDesc:;
- (void)setShowGuide:;
- (void)setSubGuide:;
- (BOOL)showGuide;
- (id)subGuide;
- (id)successDesc;
- (void).cxx_destruct;
- (id)showType;
- (void)setShowType:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
