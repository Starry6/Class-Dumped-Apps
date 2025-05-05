@interface CNDASearchQueryConsumer : NSObject
@property (nonatomic) CNResult result;
- (id)result;
- (void).cxx_destruct;
- (void)searchQuery:returnedResults:;
- (void)searchQuery:finishedWithError:;
- (id)initWithLatch:;
+ (id)SuccessfulResults;
@end
