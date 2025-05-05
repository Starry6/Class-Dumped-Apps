@interface IESECDIMessage : NSObject
- (id)getObserverListForMessageKey:;
- (BOOL)registerMessage:;
- (void)unregisterMessage:;
- (void)dealloc;
- (id)allObservers;
- (void).cxx_destruct;
- (id)initWithKey:;
- (id)description;
@end
