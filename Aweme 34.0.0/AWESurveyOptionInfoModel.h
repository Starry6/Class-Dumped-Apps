@interface AWESurveyOptionInfoModel : AWEBaseApiModel
@property (nonatomic) NSNumber rate;
@property (nonatomic) NSString content;
@property (nonatomic) NSString optionID;
@property (nonatomic) NSString richContent;
@property (nonatomic) NSString key;
@property (nonatomic) BOOL extraRequired;
@property (nonatomic) BOOL isDefaultValue;
@property (nonatomic) BOOL needExtra;
- (id)richContent;
- (BOOL)needExtra;
- (void)setNeedExtra:;
- (void)setOptionID:;
- (void)setRichContent:;
- (BOOL)extraRequired;
- (void)setExtraRequired:;
- (void)setRate:;
- (id)rate;
- (id)content;
- (void)setKey:;
- (id)key;
- (void)setContent:;
- (void).cxx_destruct;
- (id)optionID;
- (BOOL)isDefaultValue;
- (void)setIsDefaultValue:;
+ (id)JSONKeyPathsByPropertyKey;
@end
