@interface AWESECBpeaEventSubscriber : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)subscriberUid;
- (BOOL)__isTargetContext:timestamp:apiToken:datamap:certType:;
- (void)handleEvent:;
@end
