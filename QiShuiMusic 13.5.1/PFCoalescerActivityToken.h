@interface PFCoalescerActivityToken : NSObject
@property (nonatomic) NSObject<OS_dispatch_group> group;
@property (nonatomic) NSObject<OS_dispatch_queue> isolationQueue;
@property (nonatomic) NSString reason;
@property (nonatomic) NSArray callStackReturnAddresses;
@property (nonatomic) NSDate creationDate;
- (id)initWithDispatchGroup:reason:;
- (void)dealloc;
- (void)setCreationDate:;
- (void)endActivity;
- (id)isolationQueue;
- (id)reason;
- (void)setIsolationQueue:;
- (id)callStackReturnAddresses;
- (void)setGroup:;
- (void)setReason:;
- (id)group;
- (void).cxx_destruct;
- (id)description;
- (void)setCallStackReturnAddresses:;
- (id)creationDate;
@end
