@interface AWEUGActivityAntiMatryoshkaConfigModel : MTLModel
@property (nonatomic) BOOL enable;
@property (nonatomic) NSArray scenes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enable;
- (id)scenes;
- (void).cxx_destruct;
- (void)setEnable:;
- (void)setScenes:;
+ (id)scenesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
