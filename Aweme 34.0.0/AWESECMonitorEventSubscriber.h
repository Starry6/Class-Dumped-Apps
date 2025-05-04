@interface AWESECMonitorEventSubscriber : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canHandelEvent:;
- (id)hanleEvent:;
- (BOOL)__isTargetContext:timestamp:monitorToken:datamap:;
- (id)uniqueId;
@end
