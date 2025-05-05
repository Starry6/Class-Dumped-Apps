@interface BDXBridgePlayerGetPlayerStatePlayingPlayable : BDXBridgeModel
@property (nonatomic) NSString id;
@property (nonatomic) q type;
- (id)id;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
- (void)setId:;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
