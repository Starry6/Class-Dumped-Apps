@interface IESLiveSaaSPBInRoomBannerEvent : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger position;
@property (nonatomic) IESLiveSaaSPBBannerData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
