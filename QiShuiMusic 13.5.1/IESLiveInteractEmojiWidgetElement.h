@interface IESLiveInteractEmojiWidgetElement : IESLiveInteractSeatElementBase
@property (nonatomic) IESLiveInteractDynamicEmojiWidgetElementInfoModel dynamicValue;
@property (nonatomic) NSNumber visible;
@property (nonatomic) NSString uid;
@property (nonatomic) NSNumber resourceType;
@property (nonatomic) NSString value;
@property (nonatomic) UIImageView emojiImageView;
@property (nonatomic) UILabel emojiLabel;
@property (nonatomic) IESLiveAnimatedImageView avatarAnim;
@property (nonatomic) BOOL isAnimated;
- (id)avatarAnim;
- (id)dynamicItemId;
- (void)dynamicUpdateItemInfo:;
- (id)dynamicValue;
- (void)elementSeatTypeDidChanged;
- (id)emojiImageView;
- (id)emojiWidgetContainer;
- (id)interactInfoView;
- (void)setAvatarAnim:;
- (void)setDynamicValue:;
- (void)setEmojiImageView:;
- (void)setEmojiLabel:;
- (void)setIsAnimated:;
- (void)updateEmojiWidget:;
- (id)visible;
- (void)setVisible:;
- (id)uid;
- (id)resourceType;
- (BOOL)isAnimated;
- (void)setUid:;
- (void)setResourceType:;
- (void)setValue:;
- (void).cxx_destruct;
- (id)value;
- (id)emojiLabel;
- (id)infoView;
@end
