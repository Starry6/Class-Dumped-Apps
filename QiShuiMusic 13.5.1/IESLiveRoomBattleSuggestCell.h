@interface IESLiveRoomBattleSuggestCell : UITableViewCell
@property (nonatomic) UILabel wordLabel;
@property (nonatomic) UIImageView tipIcon;
@property (nonatomic) UIView sepratorLine;
@property (nonatomic) NSAttributedString word;
- (id)tipIcon;
- (void)updateWithWord:;
- (void)didTapSearch;
- (id)sepratorLine;
- (void)setSepratorLine:;
- (void)setTipIcon:;
- (void)setWordLabel:;
- (id)wordLabel;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)word;
- (void)setWord:;
- (void)layoutUI;
@end
