@interface AWEConcernAccuracyReporter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackCountAccuracyWithParam:;
+ (void)trackRemindAccuracyWithParam:;
+ (void)trackYellowDotAccuracyWithParam:;
+ (void)trackAccuracyWithFollowStatus:previousFollowStatus:enterFrom:;
@end
