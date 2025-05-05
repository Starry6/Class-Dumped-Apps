@interface IESIMMessage : NSObject
- (id)getObserverListForMessageKey:;
- (BOOL)registerMessage:;
- (void)unregisterMessage:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithKey:;
- (id)description;
@end
