@interface AWEStudioPublishLandingNoStrategy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)landingInfoWithTask:;
- (BOOL)shouldNoLanding:;
- (id)noLandingWithTask:;
- (BOOL)noLandingForRetry:;
@end
