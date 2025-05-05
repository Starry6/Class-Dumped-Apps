@interface HTSGroupedLiveMessageHandler : HTSLiveMessageHandler
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canHandleMessage:;
- (void)handleMessage:;
- (void).cxx_destruct;
- (id)initWithHandlers:;
@end
