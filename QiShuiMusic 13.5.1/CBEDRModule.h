@interface CBEDRModule : CBModule
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)removeHIDServiceClient:;
- (void)handleALSEvent:;
- (void)handleNotificationForKey:withProperty:;
- (BOOL)addHIDServiceClient:;
- (BOOL)handleHIDEvent:from:;
- (void)dealloc;
- (void)start;
- (id)copyPropertyForKey:withParameter:;
- (void)stop;
- (id)copyPropertyForKey:;
- (BOOL)setProperty:forKey:;
- (void)handleHIDEventInternal:from:;
- (id)initWithQueue:display:colorModule:andDisplayModule:;
- (void)handleBrightnessUpdate:;
- (void)handleTargetWhitepointUpdate:;
- (void)updateEDRState;
@end
