@interface TMBPEAHybridErrorReporter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)_shouldHandleEvent:;
- (id)eventName:;
- (id)subscriberUid;
- (void)handleEvent:;
- (void)_handleEvent:;
@end
