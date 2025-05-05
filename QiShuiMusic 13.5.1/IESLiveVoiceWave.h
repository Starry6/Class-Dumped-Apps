@interface IESLiveVoiceWave : IESLivePBBaseMessage
@property (nonatomic) NSString dressId;
@property (nonatomic) HTSLiveImage lowImg;
@property (nonatomic) BOOL hasLowImg;
@property (nonatomic) HTSLiveImage mediumImg;
@property (nonatomic) BOOL hasMediumImg;
@property (nonatomic) HTSLiveImage highImg;
@property (nonatomic) BOOL hasHighImg;
+ (id)descriptor;
@end
