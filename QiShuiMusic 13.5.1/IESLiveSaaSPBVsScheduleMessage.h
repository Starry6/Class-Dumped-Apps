@interface IESLiveSaaSPBVsScheduleMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger action;
@property (nonatomic) q matchId;
@property (nonatomic) GPBInt64Array eventIdsArray;
@property (nonatomic) Q eventIdsArray_Count;
@property (nonatomic) q contentId;
@property (nonatomic) NSString matchIdStr;
@property (nonatomic) NSString contentIdStr;
@property (nonatomic) NSMutableArray eventIdsStrArray;
@property (nonatomic) Q eventIdsStrArray_Count;
+ (id)descriptor;
@end
