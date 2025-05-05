@interface HTSLiveInRoomBannerEvent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger position;
@property (nonatomic) HTSLiveBannerData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
