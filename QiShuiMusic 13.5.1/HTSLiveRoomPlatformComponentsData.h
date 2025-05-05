@interface HTSLiveRoomPlatformComponentsData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveRoomTitle roomTitle;
@property (nonatomic) BOOL hasRoomTitle;
@property (nonatomic) HTSLiveRoomViewStats roomCount;
@property (nonatomic) BOOL hasRoomCount;
@property (nonatomic) HTSLiveRoomAvator roomAvator;
@property (nonatomic) BOOL hasRoomAvator;
@property (nonatomic) RoomPublicScreenInfo publicScreenInfo;
@property (nonatomic) BOOL hasPublicScreenInfo;
@property (nonatomic) RoomFullVideoBTN fullVideoBtn;
@property (nonatomic) BOOL hasFullVideoBtn;
@property (nonatomic) RoomBanner banner;
@property (nonatomic) BOOL hasBanner;
@property (nonatomic) RoomCore core;
@property (nonatomic) BOOL hasCore;
+ (id)descriptor;
@end
