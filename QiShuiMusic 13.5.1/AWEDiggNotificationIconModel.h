@interface AWEDiggNotificationIconModel : IESIMBaseApiModel
@property (nonatomic) q iconIndex;
@property (nonatomic) IESIMURLModel iconURL;
- (long long)iconIndex;
- (void)setIconIndex:;
- (void)setIconURL:;
- (void).cxx_destruct;
- (id)iconURL;
+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
