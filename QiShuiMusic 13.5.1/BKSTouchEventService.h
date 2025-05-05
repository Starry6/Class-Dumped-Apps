@interface BKSTouchEventService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)_connectToService;
- (void).cxx_destruct;
- (void)_repostAllRegistrations;
- (id)registerSceneHostSettings:forCAContextID:;
- (void)addTouchAuthenticationSpecifications:forReason:;
- (id)addAuthenticationSpecifications:forReason:;
+ (id)sharedInstance;
@end
