@interface AWEMVCardTrackerUtil : NSObject
+ (id)trackParamsForVideoInflowWithModel:;
+ (id)commonParamsWithModel:context:;
+ (id)cardNameWithType:;
+ (id)trackParamsForLiveInflowWithModel:;
+ (long long)followTagWithFollowStatus:;
+ (id)idFromModel:;
+ (id)dataTypeWithModel:;
+ (long long)indexOfModel:inArray:;
@end
