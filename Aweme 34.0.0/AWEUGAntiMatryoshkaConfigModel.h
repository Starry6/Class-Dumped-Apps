@interface AWEUGAntiMatryoshkaConfigModel : MTLModel
@property (nonatomic) BOOL enableMatryoshkaCheck;
@property (nonatomic) AWEUGActivityAntiMatryoshkaConfigModel activityConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)activityConfig;
- (void)setActivityConfig:;
- (BOOL)enableMatryoshkaCheck;
- (void)setEnableMatryoshkaCheck:;
- (void).cxx_destruct;
+ (id)activityConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
