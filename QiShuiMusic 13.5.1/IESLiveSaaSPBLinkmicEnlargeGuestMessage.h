@interface IESLiveSaaSPBLinkmicEnlargeGuestMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger msgType;
@property (nonatomic) GPBEnumArray playModesArray;
@property (nonatomic) Q playModesArray_Count;
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) IESLiveSaaSPBLinkmicEnlargeGuestTurnOnContent turnOnContent;
@property (nonatomic) IESLiveSaaSPBLinkmicEnlargeGuestTurnOffContent turnOffContent;
@property (nonatomic) IESLiveSaaSPBLinkmicEnlargeGuestChangeUserContent changeUserContent;
+ (id)descriptor;
@end
