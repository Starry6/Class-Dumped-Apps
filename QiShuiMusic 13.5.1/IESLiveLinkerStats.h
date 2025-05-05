@interface IESLiveLinkerStats : IESLivePBBaseMessage
@property (nonatomic) IESLiveMultiPKModeInfo multiPkModeInfo;
@property (nonatomic) BOOL hasMultiPkModeInfo;
@property (nonatomic) BOOL battleDisplayEntrance;
@property (nonatomic) BOOL forbidInviteByGeneral;
@property (nonatomic) BOOL forbidApplyFromOther;
@property (nonatomic) NSString lynxData;
@property (nonatomic) IESLiveLinkmicUIConfig uiConfig;
@property (nonatomic) BOOL hasUiConfig;
+ (id)descriptor;
@end
