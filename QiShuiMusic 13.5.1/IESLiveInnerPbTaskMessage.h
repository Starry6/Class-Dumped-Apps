@interface IESLiveInnerPbTaskMessage : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSMutableArray taskRecordsArray;
@property (nonatomic) Q taskRecordsArray_Count;
@property (nonatomic) NSInteger action;
+ (id)descriptor;
@end
