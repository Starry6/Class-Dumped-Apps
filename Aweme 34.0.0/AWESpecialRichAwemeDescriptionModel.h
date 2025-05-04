@interface AWESpecialRichAwemeDescriptionModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString descriptionString;
@property (nonatomic) NSString extraDescriptionString;
@property (nonatomic) NSString descriptionSecondString;
- (id)extraDescriptionString;
- (void)setExtraDescriptionString:;
- (id)descriptionSecondString;
- (void)setDescriptionSecondString:;
- (void)setDescriptionString:;
- (id)descriptionString;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
