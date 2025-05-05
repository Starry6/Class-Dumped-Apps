@interface CNContactCardFieldPickerPhotoCell : UITableViewCell
@property (nonatomic) CNAvatarView avatarView;
- (void)setSelected:animated:;
- (id)init;
- (id)avatarView;
- (void)setAvatarView:;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)setConfiguration;
- (void)prepareCellWithContact:;
@end
