@interface AWEEditStickerBubbleItem : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) UIImage image;
@property (nonatomic) @? actionBlock;
@property (nonatomic) NSString actionTag;
@property (nonatomic) BOOL showShakeAnimation;
@property (nonatomic) @? shakeAniPerformedBlock;
- (id)actionTag;
- (id)initWithImage:title:actionBlock:;
- (void)setActionTag:;
- (void)setShowShakeAnimation:;
- (void)setShakeAniPerformedBlock:;
- (BOOL)showShakeAnimation;
- (id)shakeAniPerformedBlock;
- (id)image;
- (void)setImage:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setActionBlock:;
- (id)actionBlock;
@end
