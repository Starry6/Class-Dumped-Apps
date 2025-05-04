@interface AWEMusicDetailInspirationSettingsModel : MTLModel
@property (nonatomic) NSNumber upperLimitCount;
@property (nonatomic) NSArray inspirations;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)upperLimitCount;
- (void)setUpperLimitCount:;
- (id)inspirations;
- (void)setInspirations:;
- (void).cxx_destruct;
+ (id)inspirationsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
