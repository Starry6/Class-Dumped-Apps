@interface DNDEventBehaviorResolutionService : NSObject
- (id)_initWithClientIdentifier:;
- (void).cxx_destruct;
- (id)resolveBehaviorForEventDetails:error:;
+ (id)serviceForClientIdentifier:;
@end
