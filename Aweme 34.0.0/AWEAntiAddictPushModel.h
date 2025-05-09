@interface AWEAntiAddictPushModel : MTLModel
@property (nonatomic) BOOL isCurTimeBetween5And22;
@property (nonatomic) NSString remindTitle;
@property (nonatomic) NSArray buttonConfigs;
@property (nonatomic) NSString iconGeckoChannel;
@property (nonatomic) NSString iconImage;
@property (nonatomic) NSString iconLottie;
@property (nonatomic) NSString backgroundColorBegin;
@property (nonatomic) NSString backgroundColorEnd;
@property (nonatomic) NSString borderColor;
@property (nonatomic) NSString actionBtnText;
@property (nonatomic) NSString actionBtnTextColor;
@property (nonatomic) NSString actionBtnSchema;
@property (nonatomic) NSString hintText;
@property (nonatomic) NSString hintTextColor;
@property (nonatomic) NSString timeManagerButtonTextColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hintText;
- (id)iconGeckoChannel;
- (id)iconLottie;
- (BOOL)isCurTimeBetween5And22;
- (id)actionBtnText;
- (id)actionBtnTextColor;
- (id)hintTextColor;
- (id)backgroundColorBegin;
- (id)backgroundColorEnd;
- (id)buttonConfigs;
- (void)setIsCurTimeBetween5And22:;
- (id)remindTitle;
- (void)setRemindTitle:;
- (void)setButtonConfigs:;
- (id)timeManagerButtonTextColor;
- (id)actionBtnSchema;
- (void)setIconGeckoChannel:;
- (void)setIconLottie:;
- (void)setBackgroundColorBegin:;
- (void)setBackgroundColorEnd:;
- (void)setActionBtnText:;
- (void)setActionBtnTextColor:;
- (void)setActionBtnSchema:;
- (void)setTimeManagerButtonTextColor:;
- (void)setHintTextColor:;
- (void)setBorderColor:;
- (id)iconImage;
- (id)borderColor;
- (void)setIconImage:;
- (void).cxx_destruct;
- (id)buttonTitles;
- (void)setHintText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
