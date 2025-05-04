@interface AWEFlashMobFlashMobStickerConfig : MTLModel
@property (nonatomic) NSString stickerBgColor;
@property (nonatomic) NSNumber stickerBgRadius;
@property (nonatomic) BOOL hasAvatars;
@property (nonatomic) BOOL hasJoinBtn;
@property (nonatomic) BOOL hasFlashTips;
@property (nonatomic) NSNumber stickerInitHeight;
@property (nonatomic) NSNumber stickerInitWidth;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)stickerInitWidth;
- (id)stickerInitHeight;
- (id)stickerBgColor;
- (id)stickerBgRadius;
- (BOOL)hasAvatars;
- (BOOL)hasJoinBtn;
- (void)setStickerBgColor:;
- (void)setStickerBgRadius:;
- (void)setHasAvatars:;
- (void)setHasJoinBtn:;
- (BOOL)hasFlashTips;
- (void)setHasFlashTips:;
- (void)setStickerInitHeight:;
- (void)setStickerInitWidth:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
