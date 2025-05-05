@interface IESSaaSTIMMessagesOrderByOrderIndexReverseIterator : IESSaaSTIMMessagesIterator
@property (nonatomic) q currentCursor;
@property (nonatomic) q startCursor;
@property (nonatomic) q endCursor;
@property (nonatomic) q belongingUser;
@property (nonatomic) NSString uuid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStartCursor:;
- (long long)belongingUser;
- (long long)currentCursor;
- (long long)endCursor;
- (void)setBelongingUser:;
- (void)setCurrentCursor:;
- (void)setEndCursor:;
- (id)next;
- (id)init;
- (id)uuid;
- (void)setUuid:;
- (void).cxx_destruct;
- (long long)startCursor;
+ (id)sharedCache;
@end
