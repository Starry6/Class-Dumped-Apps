@interface AWERecommendTracker : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackWithContext:;
+ (void)trackFollowCardWithContext:;
+ (void)trackFollowCardWithUser:context:;
+ (void)trackFollowCardWithAweme:context:;
+ (void)trackFollowFromCardWithContext:;
+ (void)trackFollowFromCardWithUser:context:;
+ (void)trackFollowFromCardWithAweme:context:;
+ (void)trackWithUser:context:;
+ (id)p_followTrackCommonTrackInfo:;
+ (void)trackWithRecommendContext:;
+ (void)trackWithContext:params:;
+ (void)recordRecommendImpressionWithContext:;
+ (void)monitorUnfollowFamliarItemWithContext:;
@end
