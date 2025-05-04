@interface AWEVideoCoverEvaluateLowSuggestModel : MTLModel
@property (nonatomic) NSString problemKey;
@property (nonatomic) NSDictionary url;
@property (nonatomic) NSString problemTitle;
@property (nonatomic) NSString problemCaption;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)problemKey;
- (void)setProblemKey:;
- (id)problemTitle;
- (void)setProblemTitle:;
- (id)problemCaption;
- (void)setProblemCaption:;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)url;
+ (id)lowSuggestListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
