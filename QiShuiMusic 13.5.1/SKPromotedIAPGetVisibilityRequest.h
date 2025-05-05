@interface SKPromotedIAPGetVisibilityRequest : SKRequest
@property (nonatomic) @? completionHandler;
@property (nonatomic) NSString productId;
@property (nonatomic) NSString bundleId;
- (id)productId;
- (id)bundleId;
- (void)setCompletionHandler:;
- (void).cxx_destruct;
- (void)_start;
- (void)setBundleId:;
- (id)completionHandler;
- (void)setProductId:;
- (void)_handleReply:;
- (id)initWithProductId:completionHandler:;
- (id)initWithProductId:bundleId:completionHandler:;
@end
