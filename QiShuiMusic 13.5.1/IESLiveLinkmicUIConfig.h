@interface IESLiveLinkmicUIConfig : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage roomBgFullImage;
@property (nonatomic) BOOL hasRoomBgFullImage;
@property (nonatomic) HTSLiveImage roomBgTopImage;
@property (nonatomic) BOOL hasRoomBgTopImage;
@property (nonatomic) HTSLiveImage roomBgBottomImage;
@property (nonatomic) BOOL hasRoomBgBottomImage;
+ (id)descriptor;
@end
