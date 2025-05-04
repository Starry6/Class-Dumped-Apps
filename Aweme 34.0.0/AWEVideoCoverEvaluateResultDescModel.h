@interface AWEVideoCoverEvaluateResultDescModel : MTLModel
@property (nonatomic) NSString content;
@property (nonatomic) NSString title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)resultDescJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
