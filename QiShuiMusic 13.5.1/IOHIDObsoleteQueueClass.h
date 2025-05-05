@interface IOHIDObsoleteQueueClass : IOHIDQueueClass
- (void)dealloc;
- (int)setEventCallout:callbackTarget:callbackRefcon:;
- (int)getNextEvent:;
- (id)initWithDevice:;
- (int)queryInterface:outInterface:;
@end
