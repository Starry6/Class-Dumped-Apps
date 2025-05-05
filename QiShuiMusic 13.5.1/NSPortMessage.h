@interface NSPortMessage : NSObject
@property (nonatomic) NSArray components;
@property (nonatomic) NSPort receivePort;
@property (nonatomic) NSPort sendPort;
@property (nonatomic) I msgid;
- (id)components;
- (void)dealloc;
- (id)copyWithZone:;
- (id)initWithSendPort:receivePort:components:;
- (id)initWithReceivePort:sendPort:components:;
- (id)sendPort;
- (id)receivePort;
- (unsigned int)msgid;
- (void)setMsgid:;
- (BOOL)sendBeforeDate:;
@end
