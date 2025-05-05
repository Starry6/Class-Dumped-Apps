@interface MPModelStaticRequest : MPModelRequest
@property (nonatomic) MPModelStaticResponse staticResponse;
- (id)newOperationWithResponseHandler:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)staticResponse;
- (void)setStaticResponse:;
+ (BOOL)supportsSecureCoding;
@end
