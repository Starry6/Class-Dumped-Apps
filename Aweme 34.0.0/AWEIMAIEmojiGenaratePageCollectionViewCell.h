@interface AWEIMAIEmojiGenaratePageCollectionViewCell : AWEIMEmoticonFullImageCollectionViewCell
@property (nonatomic) UIImageView editImageView;
@property (nonatomic) UIControl<IESIMCheckBoxProtocol> checkBox;
@property (nonatomic) <AWEIMAIEmojiGenaratePageCollectionViewCellDelegate> delegate;
- (id)checkBox;
- (void)setCheckBox:;
- (void)renderWithViewModel:;
- (void)createComponent;
- (void)p_didClickCheckBox;
- (void)layoutComponent;
- (void)p_didClickEdit;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)editImageView;
- (void)setEditImageView:;
+ (id)identifier;
@end
