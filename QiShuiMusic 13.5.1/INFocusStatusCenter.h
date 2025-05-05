@interface INFocusStatusCenter : NSObject
@property (nonatomic) DNDAvailabilityService service;
@property (nonatomic) INFocusStatus focusStatus;
@property (nonatomic) q authorizationStatus;
- (id)init;
- (long long)authorizationStatus;
- (id)service;
- (void).cxx_destruct;
- (id)focusStatus;
- (void)requestAuthorizationWithCompletionHandler:;
+ (id)defaultCenter;
@end
