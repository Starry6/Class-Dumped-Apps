@interface AWEIMNoticeConfigOptionModel : IESIMBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) q value;
- (long long)value;
- (void)setSubTitle:;
- (void)setValue:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
