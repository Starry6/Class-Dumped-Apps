@interface AuxiliaryScoreInfo : IESLivePBBaseMessage
@property (nonatomic) NSString anchorScore;
@property (nonatomic) HTSLiveImage auxiliaryImg;
@property (nonatomic) BOOL hasAuxiliaryImg;
@property (nonatomic) q index;
@property (nonatomic) q giftId;
@property (nonatomic) q auxiliaryType;
@property (nonatomic) q anchorScoreInt;
+ (id)descriptor;
@end
