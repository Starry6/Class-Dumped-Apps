@interface HTSLiveLikeMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q count;
@property (nonatomic) q total;
@property (nonatomic) q color;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSString icon;
@property (nonatomic) HTSLivePicoDisplayInfo picoDisplayInfo;
@property (nonatomic) BOOL hasPicoDisplayInfo;
@property (nonatomic) HTSLiveDisplayControlInfo displayControlInfo;
@property (nonatomic) BOOL hasDisplayControlInfo;
@property (nonatomic) NSString scene;
@property (nonatomic) HTSLiveDoubleLikeDetail doubleLikeDetail;
@property (nonatomic) BOOL hasDoubleLikeDetail;
@property (nonatomic) q linkmicGuestUid;
@property (nonatomic) HTSLivePublicAreaCommon publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
+ (id)descriptor;
@end
