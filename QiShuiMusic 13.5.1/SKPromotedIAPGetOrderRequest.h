@interface SKPromotedIAPGetOrderRequest : SKRequest
@property (nonatomic) @? completionHandler;
@property (nonatomic) NSString bundleId;
- (id)bundleId;
- (void)setCompletionHandler:;
- (void).cxx_destruct;
- (void)_start;
- (void)setBundleId:;
- (id)initWithCompletionHandler:;
- (id)completionHandler;
- (id)initWithBundleId:completionHandler:;
- (void)_handleReply:;
@end
