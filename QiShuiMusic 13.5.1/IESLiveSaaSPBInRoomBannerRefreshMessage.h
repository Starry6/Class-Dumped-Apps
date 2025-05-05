@interface IESLiveSaaSPBInRoomBannerRefreshMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q maxDelaySeconds;
@property (nonatomic) NSInteger position;
+ (id)descriptor;
@end
