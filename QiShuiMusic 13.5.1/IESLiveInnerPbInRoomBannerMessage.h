@interface IESLiveInnerPbInRoomBannerMessage : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString extra;
@property (nonatomic) NSInteger position;
@property (nonatomic) NSInteger actionType;
+ (id)descriptor;
@end
