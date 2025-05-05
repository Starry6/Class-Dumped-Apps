@interface IESLiveInnerPbRoomBorderMessage : GPBMessage
@property (nonatomic) IESLiveInnerPbCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) IESLiveInnerPbBorderInfo borderInfo;
@property (nonatomic) BOOL hasBorderInfo;
- (id)translateIntoBorderImage;
+ (id)descriptor;
@end
