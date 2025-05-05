@interface IOHIDPlugin : IOHIDIUnknown2
- (id)init;
- (void)dealloc;
- (int)stop;
- (int)probe:service:outScore:;
- (int)start:service:;
@end
