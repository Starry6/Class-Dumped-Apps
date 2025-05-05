@interface IESLiveInnerPbInRoomBannerEvent : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger position;
@property (nonatomic) IESLiveInnerPbBannerData data_p;
@property (nonatomic) BOOL hasData_p;
+ (id)descriptor;
@end
