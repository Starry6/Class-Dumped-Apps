@interface AWEIMEnterpriseModeGuideConfig : MTLModel
@property (nonatomic) q style;
@property (nonatomic) NSString hintImgUrl;
@property (nonatomic) NSString title;
@property (nonatomic) NSString descriptionText;
@property (nonatomic) NSString confirmBtnText;
@property (nonatomic) NSString cancelBtnText;
@property (nonatomic) AWEIMEnterpriseModeGuideFrequencyConfig freqConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)confirmBtnText;
- (id)cancelBtnText;
- (id)freqConfig;
- (void)setFreqConfig:;
- (id)hintImgUrl;
- (void)setHintImgUrl:;
- (void)setConfirmBtnText:;
- (void)setCancelBtnText:;
- (long long)style;
- (id)descriptionText;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setDescriptionText:;
- (void)setStyle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
