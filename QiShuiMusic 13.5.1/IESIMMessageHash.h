@interface IESIMMessageHash : NSObject
- (id)getKeyMessageList:;
- (void)registerMessage:forKey:;
- (void)unregisterKeyMessage:;
- (id)init;
- (void).cxx_destruct;
@end
