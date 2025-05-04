@interface AWEGuideSearchWordsExtraModel : AWEBaseApiModel
@property (nonatomic) NSString type;
@property (nonatomic) NSString hintText;
@property (nonatomic) Q guideSearchWordsType;
@property (nonatomic) NSString maskType;
@property (nonatomic) NSString imprExtra;
- (id)hintText;
- (void)setGuideSearchWordsType:;
- (void)setImprExtra:;
- (unsigned long long)guideSearchWordsType;
- (id)imprExtra;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)maskType;
- (void)setMaskType:;
- (void)setHintText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
