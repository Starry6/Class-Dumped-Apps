@interface IOHIDObsoleteDeviceClass : IOHIDDeviceClass
- (id)init;
- (void)dealloc;
- (int)copyMatchingElements:element:;
- (int)setRemovalCallback:removalTarget:removalRefcon:;
- (int)setInterruptReportHandlerCallback:reportBufferSize:callback:callbackTarget:callbackRefcon:;
- (int)setElementValue:value:;
- (int)start:service:;
- (id)allocQueue;
- (id)allocOutputTransaction;
- (int)getElementValue:value:options:;
- (int)queryInterface:outInterface:;
@end
