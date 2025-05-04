@interface AWEDTOTextModel : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
@property (nonatomic) q layer;
@property (nonatomic) NSArray words;
@property (nonatomic) q stickerId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)stickerId;
- (void)setStickerId:;
- (void)setLayer:;
- (void)setStartTime:;
- (long long)endTime;
- (void)setEndTime:;
- (void)setText:;
- (long long)layer;
- (id)text;
- (void).cxx_destruct;
- (long long)startTime;
- (void)setWords:;
- (id)words;
+ (id)wordsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
