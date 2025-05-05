@interface IESECWindowFeedComponentResponse : IESECBaseApiModel
@property (nonatomic) NSArray components;
- (id)components;
- (void)setComponents:;
- (void).cxx_destruct;
+ (id)componentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
