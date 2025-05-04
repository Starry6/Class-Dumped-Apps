@interface AWENearbyMultiAudioUserSlotView : UIView
@property (nonatomic) UIImageView avatar;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) q index;
- (void)setIsAnchor:;
- (void)layoutUIWithUser:room:;
- (id)initWithFrame:user:room:isAnchor:;
- (void)setIndex:;
- (long long)index;
- (id)nameLabel;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (void)setNameLabel:;
- (id)avatar;
- (void)setAvatar:;
@end
