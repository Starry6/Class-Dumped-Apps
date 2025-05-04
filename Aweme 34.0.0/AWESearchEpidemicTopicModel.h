@interface AWESearchEpidemicTopicModel : AWEBaseApiModel
@property (nonatomic) NSString textColorString;
@property (nonatomic) NSString text;
@property (nonatomic) NSString schemaURL;
- (void)setSchemaURL:;
- (id)schemaURL;
- (id)textColorString;
- (void)setTextColorString:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
