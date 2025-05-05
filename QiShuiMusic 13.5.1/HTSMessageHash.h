@interface HTSMessageHash : NSObject
- (id)getKeyMessageList:;
- (void)registerMessage:forKey:;
- (void)unregisterKeyMessage:;
- (void)unregisterMessage:forKey:;
- (id)init;
- (void).cxx_destruct;
@end
