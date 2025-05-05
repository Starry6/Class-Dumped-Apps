@interface HTSLiveShowGeneralInfo : IESLivePBBaseMessage
@property (nonatomic) float ratingScore;
@property (nonatomic) HTSLiveImage horizontalCoverX2;
@property (nonatomic) BOOL hasHorizontalCoverX2;
@property (nonatomic) HTSLiveImage verticalCoverX2;
@property (nonatomic) BOOL hasVerticalCoverX2;
@property (nonatomic) HTSLiveImage horizontalCoverX3;
@property (nonatomic) BOOL hasHorizontalCoverX3;
@property (nonatomic) HTSLiveImage verticalCoverX3;
@property (nonatomic) BOOL hasVerticalCoverX3;
@property (nonatomic) BOOL syncFromXigua;
@property (nonatomic) BOOL isCommerceReplay;
@property (nonatomic) HTSLiveImage videoFirstFrame;
@property (nonatomic) BOOL hasVideoFirstFrame;
+ (id)descriptor;
@end
