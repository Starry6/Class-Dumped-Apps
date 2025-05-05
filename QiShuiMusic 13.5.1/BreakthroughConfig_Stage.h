@interface BreakthroughConfig_Stage : IESLivePBBaseMessage
@property (nonatomic) q targetScore;
@property (nonatomic) NSString endAnimationURL;
@property (nonatomic) NSString endAtmosphereURL;
@property (nonatomic) q duration;
@property (nonatomic) BattleTitleConfig titleConfig;
@property (nonatomic) BOOL hasTitleConfig;
@property (nonatomic) HTSLiveImage roomBgFullImage;
@property (nonatomic) BOOL hasRoomBgFullImage;
@property (nonatomic) HTSLiveImage roomBgTopImage;
@property (nonatomic) BOOL hasRoomBgTopImage;
@property (nonatomic) HTSLiveImage roomBgBottomImage;
@property (nonatomic) BOOL hasRoomBgBottomImage;
+ (id)descriptor;
@end
