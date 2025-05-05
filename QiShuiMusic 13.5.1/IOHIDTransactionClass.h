@interface IOHIDTransactionClass : IOHIDIUnknown2
- (int)addElement:;
- (int)removeElement:;
- (int)setDirection:;
- (void)dealloc;
- (void)setDevice:;
- (int)clear;
- (void).cxx_destruct;
- (id)initWithDevice:;
- (int)getAsyncEventSource:;
- (id)device;
- (int)queryInterface:outInterface:;
- (int)getDirection:;
- (int)containsElement:value:;
- (int)setValue:value:options:;
- (int)getValue:value:options:;
- (int)commit:timeout:callback:options:;
@end
