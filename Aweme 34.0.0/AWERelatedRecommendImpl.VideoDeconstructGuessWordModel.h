@interface AWERelatedRecommendImpl.VideoDeconstructGuessWordModel : AWEBaseApiModel
@property (nonatomic) NSDictionary extra;
@property (nonatomic) NSDictionary log_pb;
@property (nonatomic) NSArray gs_entities;
- (void)setExtra:;
- (id)log_pb;
- (void)setLog_pb:;
- (id)gs_entities;
- (void)setGs_entities:;
- (id)initWithDictionary:error:;
- (BOOL)valid;
- (id)init;
- (id)extra;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONTransformerForKey:;
+ (id)JSONKeyPathsByPropertyKey;
@end
