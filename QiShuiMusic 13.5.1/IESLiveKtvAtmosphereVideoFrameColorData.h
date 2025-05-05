@interface IESLiveKtvAtmosphereVideoFrameColorData : IESLivePBBaseMessage
@property (nonatomic) IESLiveKtvAtmosphereVideoFrameColorData_Color main;
@property (nonatomic) BOOL hasMain;
@property (nonatomic) IESLiveKtvAtmosphereVideoFrameColorData_Color secondary;
@property (nonatomic) BOOL hasSecondary;
+ (id)descriptor;
@end
