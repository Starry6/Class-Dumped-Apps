@interface AWEECommerceBubbleModel : MTLModel
@property (nonatomic) q bubbleId;
@property (nonatomic) AWEURLModel iconUrl;
@property (nonatomic) NSString bubbleTitle;
@property (nonatomic) NSString schemaUrlString;
@property (nonatomic) double delayDuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iconUrl;
- (void)setIconUrl:;
- (double)delayDuration;
- (void)setDelayDuration:;
- (id)bubbleTitle;
- (id)schemaUrlString;
- (long long)bubbleId;
- (void)setBubbleId:;
- (void)setBubbleTitle:;
- (void)setSchemaUrlString:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
