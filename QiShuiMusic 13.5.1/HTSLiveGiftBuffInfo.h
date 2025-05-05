@interface HTSLiveGiftBuffInfo : IESLivePBBaseMessage
@property (nonatomic) NSString text;
@property (nonatomic) NSString textColor;
@property (nonatomic) HTSLiveImage bgImg;
@property (nonatomic) BOOL hasBgImg;
@property (nonatomic) HTSLiveImage sweepLightImg;
@property (nonatomic) BOOL hasSweepLightImg;
@property (nonatomic) HTSLiveImage buffGiftDescribeImg;
@property (nonatomic) BOOL hasBuffGiftDescribeImg;
@property (nonatomic) q buffGiftId;
@property (nonatomic) NSInteger buffLevel;
@property (nonatomic) BOOL buffCanSend;
@property (nonatomic) q buffDiamondCount;
@property (nonatomic) NSString lockToast;
@property (nonatomic) q defaultChoseAction;
@property (nonatomic) q startTime;
@property (nonatomic) HTSLiveBuffLockInfo buffLockInfo;
@property (nonatomic) BOOL hasBuffLockInfo;
+ (id)descriptor;
@end
