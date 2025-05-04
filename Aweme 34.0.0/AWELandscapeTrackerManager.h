@interface AWELandscapeTrackerManager : NSObject
+ (id)trackParamsForVideoPlayQualityWithModel:logExtraDict:;
+ (id)trackParamsForVideoBlockWithModel:logExtraDict:;
+ (id)trackParamsForVideoPlayFailedWithModel:logExtraDict:;
@end
