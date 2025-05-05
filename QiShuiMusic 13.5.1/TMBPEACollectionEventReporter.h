@interface TMBPEACollectionEventReporter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)_shouldHandleEvent:;
- (void)alogEvent:;
- (id)eventName:;
- (id)subscriberUid;
- (void)handleEvent:;
- (void)reportEvent:;
@end
