@interface AWELVideoEntranceData : MTLModel
@property (nonatomic) NSArray meta;
@property (nonatomic) NSArray play;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPlay:;
- (id)meta;
- (id)play;
- (void)setMeta:;
- (void).cxx_destruct;
+ (id)metaJSONTransformer;
+ (id)playJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
