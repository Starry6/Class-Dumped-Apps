@interface RoomFullVideoBTN : IESLivePBBaseMessage
@property (nonatomic) q show;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) HTSLiveImage disableIcon;
@property (nonatomic) BOOL hasDisableIcon;
@property (nonatomic) q showType;
+ (id)descriptor;
@end
