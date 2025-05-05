@interface IESLiveFlexDisplayTextView : UIView
@property (nonatomic) IESLiveRichTextLabel richTextLabel;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) IESLiveFlexBackgroundImageView flexBgImageView;
@property (nonatomic) <IESLiveFlexImage> bgFlexImage;
@property (nonatomic) NSArray pieces;
@property (nonatomic) @? textUpdateBlock;
- (void)setBgFlexImage:;
- (id)flexBgImageView;
- (id)textUpdateBlock;
- (id)bgFlexImage;
- (id)pieces;
- (id)richTextLabel;
- (void)setFlexBgImageView:;
- (void)setImage:flexSetting:textSetting:;
- (void)setPieces:;
- (void)setRichTextLabel:;
- (void)setTextUpdateBlock:;
- (void)setUI;
- (id)textLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setTextLabel:;
@end
