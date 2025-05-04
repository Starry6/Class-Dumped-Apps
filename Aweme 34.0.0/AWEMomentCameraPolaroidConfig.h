@interface AWEMomentCameraPolaroidConfig : MTLModel
@property (nonatomic) AWEMomentCameraPolaroidConfigItem fallback;
@property (nonatomic) NSDictionary styles;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fallback;
- (id)styles;
- (void)setStyles:;
- (void).cxx_destruct;
- (void)setFallback:;
+ (id)fallbackJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
