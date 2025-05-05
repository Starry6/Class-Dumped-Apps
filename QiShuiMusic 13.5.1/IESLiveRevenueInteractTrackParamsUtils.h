@interface IESLiveRevenueInteractTrackParamsUtils : NSObject
+ (id)customValueKindsFromConfig:;
+ (id)endParamsByEndReason:isInitiator:;
+ (id)getCommonTrackFromPKStartParams:;
+ (id)inviteModeToString:;
+ (id)transformEndReasonToString:;
+ (id)transformInviteeListToString:;
+ (id)transfromActionFromSourceToString:;
@end
