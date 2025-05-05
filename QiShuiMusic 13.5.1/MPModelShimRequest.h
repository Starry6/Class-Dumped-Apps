@interface MPModelShimRequest : MPRequest
@property (nonatomic) MPModelRequest modelRequest;
- (id)middlewareClasses;
- (id)modelRequest;
- (void)setModelRequest:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
+ (Class)responseClass;
@end
