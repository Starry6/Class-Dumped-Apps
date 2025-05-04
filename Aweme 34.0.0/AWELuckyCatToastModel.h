@interface AWELuckyCatToastModel : AWEBaseApiModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString subText;
@property (nonatomic) NSString iconImageUrl;
@property (nonatomic) q number;
@property (nonatomic) q experience;
- (long long)experience;
- (id)subText;
- (void)setSubText:;
- (id)iconImageUrl;
- (void)setIconImageUrl:;
- (void)setText:;
- (id)text;
- (long long)number;
- (void).cxx_destruct;
- (void)setNumber:;
- (void)setExperience:;
+ (id)JSONKeyPathsByPropertyKey;
@end
