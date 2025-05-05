@interface BMPublisherVirtualTableCursor : NSObject
@property (nonatomic) BPSPublisher publisher;
@property (nonatomic) BPSSubscription subscription;
@property (nonatomic) BOOL finished;
@property (nonatomic) @ rowObject;
@property (nonatomic) q rowID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)subscription;
- (id)init;
- (void)cancel;
- (long long)rowID;
- (id)publisher;
- (void)receiveSubscription:;
- (long long)receiveInput:;
- (void)receiveCompletion:;
- (BOOL)isFinished;
- (void).cxx_destruct;
- (void)reset;
- (id)description;
- (void)advance;
- (id)initWithPublisherBlock:;
- (id)rowObject;
+ (id)new;
@end
