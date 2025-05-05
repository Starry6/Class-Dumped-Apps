@interface HTSLiveShowCenterShowInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage horizontalCover;
@property (nonatomic) BOOL hasHorizontalCover;
@property (nonatomic) HTSLiveImage verticalCover;
@property (nonatomic) BOOL hasVerticalCover;
@property (nonatomic) NSString mainTitle;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString tag;
@property (nonatomic) BOOL lastSeen;
@property (nonatomic) NSString updateStatusDesc;
@property (nonatomic) NSString cardColor;
+ (id)descriptor;
@end
