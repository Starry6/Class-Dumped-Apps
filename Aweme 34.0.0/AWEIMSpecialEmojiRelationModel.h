@interface AWEIMSpecialEmojiRelationModel : MTLModel
@property (nonatomic) NSString animationFileName;
@property (nonatomic) NSArray relationEmojiIDs;
@property (nonatomic) q type;
@property (nonatomic) AWEIMSpecialEmojiConfigModel config;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)animationFileName;
- (void)setAnimationFileName:;
- (id)relationEmojiIDs;
- (void)setRelationEmojiIDs:;
- (void)setConfig:;
- (id)config;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
+ (id)configJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
