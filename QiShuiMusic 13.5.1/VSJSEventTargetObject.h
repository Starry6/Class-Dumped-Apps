@interface VSJSEventTargetObject : VSJSObject
@property (nonatomic) NSMutableDictionary listeners;
- (void)setListeners:;
- (id)listeners;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)addEventListener:::;
- (void)removeEventListener::;
- (void)dispatchEvent:withInfo:;
- (unsigned long long)_indexForListener:withEventType:;
@end
