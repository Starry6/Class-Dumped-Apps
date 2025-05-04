@interface AWEFeedPlayableAlphaVideoModel : MTLModel
@property (nonatomic) NSString url;
@property (nonatomic) NSString section;
@property (nonatomic) NSArray steps;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSection:;
- (void)setUrl:;
- (id)steps;
- (id)section;
- (void).cxx_destruct;
- (void)setSteps:;
- (id)url;
+ (id)stepsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
