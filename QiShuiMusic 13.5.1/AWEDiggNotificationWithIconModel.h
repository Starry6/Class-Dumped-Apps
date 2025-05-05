@interface AWEDiggNotificationWithIconModel : IESIMBaseApiModel
@property (nonatomic) NSString content;
@property (nonatomic) NSArray icon;
- (id)content;
- (void)setContent:;
- (id)icon;
- (void)setIcon:;
- (void).cxx_destruct;
+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
