@interface NEHelper : NSObject
@property (nonatomic) @? incomingMessageHandler;
@property (nonatomic) BOOL isSynchronous;
- (void)setIsSynchronous:;
- (void)dealloc;
- (void)sendRequest:responseHandler:;
- (id)incomingMessageHandler;
- (void)setIncomingMessageHandler:;
- (id)initWithDelegateClassID:queue:;
- (void).cxx_destruct;
- (id)initWithDelegateClassID:queue:additionalProperties:;
- (BOOL)isSynchronous;
@end
