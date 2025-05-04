@interface AWEAdPlayletTrackService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)commonAdParamsWhenUserTrackerWithlogExtraDict:;
+ (id)commonAdParamsWhenUserTrackerWithlogExtra:;
+ (void)trackPlayletContentRechargeShowWithModel:logExtraDict:;
+ (void)trackPlayletContentPaySuccessWithModel:logExtraDict:;
+ (void)adPlayletTrackWithModel:label:refer:adExtraDict:logExtraDict:;
+ (id)commonAdParamsWhenUserTrackerWithModel:;
@end
