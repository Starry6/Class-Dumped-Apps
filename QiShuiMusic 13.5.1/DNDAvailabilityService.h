@interface DNDAvailabilityService : NSObject
- (id)_initWithClientIdentifier:;
- (void).cxx_destruct;
- (BOOL)isLocalUserAvailableReturningError:;
+ (id)serviceForClientIdentifier:;
@end
