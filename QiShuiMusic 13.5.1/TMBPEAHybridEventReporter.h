@interface TMBPEAHybridEventReporter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_alogEvent:;
- (BOOL)_shouldHandleEvent:;
- (id)eventName:;
- (id)subscriberUid;
- (void)handleEvent:;
- (void)_reportEvent:;
@end
