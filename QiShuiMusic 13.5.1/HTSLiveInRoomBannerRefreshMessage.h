@interface HTSLiveInRoomBannerRefreshMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q maxDelaySeconds;
@property (nonatomic) NSInteger position;
+ (id)descriptor;
@end
