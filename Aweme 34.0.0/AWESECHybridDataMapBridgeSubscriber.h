@interface AWESECHybridDataMapBridgeSubscriber : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)__shouldHandlePiperEvent:;
- (void)_handleEvent:;
- (void)handleEvent:;
- (id)subscriberId;
@end
