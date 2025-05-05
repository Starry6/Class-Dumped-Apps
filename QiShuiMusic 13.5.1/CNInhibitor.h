@interface CNInhibitor : NSObject
@property (nonatomic) BOOL debugIsInhibiting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)start;
- (BOOL)debugIsInhibiting;
- (void)setDebugIsInhibiting:;
- (void)stop;
+ (id)suddenTerminationInhibitor;
+ (id)suddenTerminationInhibitorWithProcessInfo:;
+ (id)os_transactionInhibitorWithLabel:;
+ (id)runningboardInhibitorWithExplanation:;
@end
