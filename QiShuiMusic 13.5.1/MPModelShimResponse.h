@interface MPModelShimResponse : MPResponse
@property (nonatomic) MPModelResponse modelResponse;
- (void)setModelResponse:;
- (id)initWithRequest:middleware:;
- (void).cxx_destruct;
- (id)modelResponse;
+ (id)builderProtocol;
@end
