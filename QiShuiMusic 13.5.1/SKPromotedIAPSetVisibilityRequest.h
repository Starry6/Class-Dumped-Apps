@interface SKPromotedIAPSetVisibilityRequest : SKRequest
@property (nonatomic) @? completionHandler;
@property (nonatomic) q visibility;
@property (nonatomic) NSString productId;
@property (nonatomic) NSString bundleId;
- (void)setVisibility:;
- (long long)visibility;
- (id)productId;
- (id)bundleId;
- (void)setCompletionHandler:;
- (void).cxx_destruct;
- (void)_start;
- (void)setBundleId:;
- (id)completionHandler;
- (void)setProductId:;
- (void)_handleReply:;
- (id)initWithVisibility:productId:completionHandler:;
- (id)initWithVisibility:productId:bundleId:completionHandler:;
@end
