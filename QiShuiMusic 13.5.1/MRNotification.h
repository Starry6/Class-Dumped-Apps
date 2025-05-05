@interface MRNotification : NSObject
@property (nonatomic) NSString notification;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) NSObject<OS_xpc_object> xpcMessage;
- (id)initWithNotification:userInfo:;
- (id)userInfo;
- (id)notification;
- (void)setXpcMessage:;
- (void).cxx_destruct;
- (id)xpcMessage;
@end
