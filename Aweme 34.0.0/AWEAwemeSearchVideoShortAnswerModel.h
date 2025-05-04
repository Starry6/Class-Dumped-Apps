@interface AWEAwemeSearchVideoShortAnswerModel : MTLModel
@property (nonatomic) q displayType;
@property (nonatomic) q displayRows;
@property (nonatomic) NSString answerText;
@property (nonatomic) NSString contentText;
@property (nonatomic) AWEAwemeSearchVideoShortAnswerPrefixModel prefix;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDisplayRows:;
- (long long)displayRows;
- (id)prefix;
- (long long)displayType;
- (void)setPrefix:;
- (void)setDisplayType:;
- (void).cxx_destruct;
- (void)setContentText:;
- (id)contentText;
- (id)answerText;
- (void)setAnswerText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
