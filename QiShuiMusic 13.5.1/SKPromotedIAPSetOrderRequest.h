@interface SKPromotedIAPSetOrderRequest : SKRequest
@property (nonatomic) @? completionHandler;
@property (nonatomic) NSArray order;
@property (nonatomic) NSString bundleId;
- (id)bundleId;
- (id)order;
- (void)setCompletionHandler:;
- (void).cxx_destruct;
- (void)_start;
- (void)setOrder:;
- (void)setBundleId:;
- (id)completionHandler;
- (void)_handleReply:;
- (id)initWithOrder:completionHandler:;
- (id)initWithOrder:bundleId:completionHandler:;
@end
