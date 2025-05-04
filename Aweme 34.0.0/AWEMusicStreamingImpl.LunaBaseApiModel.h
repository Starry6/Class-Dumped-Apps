@interface AWEMusicStreamingImpl.LunaBaseApiModel : MTLModel
- (id)initWithDictionary:error:;
- (id)init;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)encodingBehaviorsByPropertyKey;
@end
