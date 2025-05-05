@interface HTSMessage : NSObject
- (id)getKeyMessageList:;
- (id)getObserverListForMessageKey:;
- (BOOL)registerMessage:;
- (BOOL)registerMessage:forKey:;
- (void)unregisterKeyMessage:;
- (void)unregisterMessage:;
- (void)unregisterMessage:forKey:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithKey:;
- (id)description;
@end
