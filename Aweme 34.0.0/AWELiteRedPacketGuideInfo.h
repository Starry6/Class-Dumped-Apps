@interface AWELiteRedPacketGuideInfo : MTLModel
@property (nonatomic) q publishCount;
@property (nonatomic) q publishLimit;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)publishCount;
- (void)setPublishCount:;
- (long long)publishLimit;
- (void)setPublishLimit:;
- (void)setValue:forUndefinedKey:;
+ (id)videoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
