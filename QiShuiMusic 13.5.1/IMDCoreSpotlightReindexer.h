@interface IMDCoreSpotlightReindexer : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithHandles:batchDeferralTime:messageAge:index:;
- (void)reindex;
@end
