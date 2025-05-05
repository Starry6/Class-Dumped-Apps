@interface BattleSkinConfig : IESLivePBBaseMessage
@property (nonatomic) NSString startAnimationURL;
@property (nonatomic) NSString winAnimationURL;
@property (nonatomic) NSString loseAnimationURL;
@property (nonatomic) NSString drawAnimationURL;
@property (nonatomic) BOOL isShowEnterUserInfo;
@property (nonatomic) HTSLiveImage roomBgFullImage;
@property (nonatomic) BOOL hasRoomBgFullImage;
@property (nonatomic) HTSLiveImage roomBgTopImage;
@property (nonatomic) BOOL hasRoomBgTopImage;
@property (nonatomic) HTSLiveImage roomBgBottomImage;
@property (nonatomic) BOOL hasRoomBgBottomImage;
@property (nonatomic) q enterUserInfoPosition;
@property (nonatomic) q enterShowTimeMs;
+ (id)descriptor;
@end
