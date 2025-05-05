@interface IESLiveSaaSFlexDisplayTextView : UIView
@property (nonatomic) IESLiveSaaSRichTextLabel richTextLabel;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) IESLiveSaaSFlexBackgroundImageView flexBgImageView;
@property (nonatomic) IESLiveSaaSPBFlexImageStruct bgFlexImage;
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
