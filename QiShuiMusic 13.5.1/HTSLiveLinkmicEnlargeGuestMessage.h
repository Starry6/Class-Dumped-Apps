@interface HTSLiveLinkmicEnlargeGuestMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger msgType;
@property (nonatomic) GPBEnumArray playModesArray;
@property (nonatomic) Q playModesArray_Count;
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) HTSLiveLinkmicEnlargeGuestTurnOnContent turnOnContent;
@property (nonatomic) HTSLiveLinkmicEnlargeGuestTurnOffContent turnOffContent;
@property (nonatomic) HTSLiveLinkmicEnlargeGuestChangeUserContent changeUserContent;
+ (id)descriptor;
@end
