@interface HTSLiveMessageHandler : NSObject
@property (nonatomic) @? messageHandler;
@property (nonatomic) NSPredicate predicate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canHandleMessage:;
- (id)initWithPredicate:handler:;
- (void)handleMessage:;
- (id)predicate;
- (id)messageHandler;
- (void)setPredicate:;
- (void).cxx_destruct;
- (void)setMessageHandler:;
@end
