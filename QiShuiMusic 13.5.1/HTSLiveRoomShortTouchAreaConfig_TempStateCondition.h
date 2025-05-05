@interface HTSLiveRoomShortTouchAreaConfig_TempStateCondition : IESLivePBBaseMessage
@property (nonatomic) HTSLiveRoomShortTouchAreaConfig_TempStateType type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) NSInteger minimumGap;
+ (id)descriptor;
@end
