@interface IESLiveSaaSPBShowGeneralInfo : GPBMessage
@property (nonatomic) float ratingScore;
@property (nonatomic) IESLiveSaaSPBImage horizontalCoverX2;
@property (nonatomic) BOOL hasHorizontalCoverX2;
@property (nonatomic) IESLiveSaaSPBImage verticalCoverX2;
@property (nonatomic) BOOL hasVerticalCoverX2;
@property (nonatomic) IESLiveSaaSPBImage horizontalCoverX3;
@property (nonatomic) BOOL hasHorizontalCoverX3;
@property (nonatomic) IESLiveSaaSPBImage verticalCoverX3;
@property (nonatomic) BOOL hasVerticalCoverX3;
@property (nonatomic) BOOL syncFromXigua;
@property (nonatomic) BOOL isCommerceReplay;
@property (nonatomic) IESLiveSaaSPBImage videoFirstFrame;
@property (nonatomic) BOOL hasVideoFirstFrame;
+ (id)descriptor;
@end
