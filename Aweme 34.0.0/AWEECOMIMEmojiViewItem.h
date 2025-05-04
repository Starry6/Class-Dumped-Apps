@interface AWEECOMIMEmojiViewItem : UICollectionViewCell
@property (nonatomic) UIImageView emojiView;
@property (nonatomic) AWEECOMIMEmojiModel model;
@property (nonatomic) @? onClick;
- (id)onClick;
- (void)setOnClick:;
- (void)reloadItemWithEmojiModel:;
- (id)emojiView;
- (void)setEmojiView:;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void)onTap;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
@end
