@interface AWEStudioDuetUtils : NSObject
+ (BOOL)canShowDuetEntranceInSharePanel:;
+ (BOOL)checkCanDuetAwemeForVideoLength:;
+ (BOOL)isDuetPrepareWithAwemeModel:;
+ (BOOL)isDuetEnabledWithAwemeModel:authorIsCurrentUser:;
@end
