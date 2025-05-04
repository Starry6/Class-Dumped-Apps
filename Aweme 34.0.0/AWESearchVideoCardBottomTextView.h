@interface AWESearchVideoCardBottomTextView : UIView
@property (nonatomic) YYLabel keyPhraseDescriptionView;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWESearchVideoKeySegmentModel keySegmentModel;
@property (nonatomic) @? clipTimestampBlock;
- (void)clickTimestamp;
- (id)keySegmentModel;
- (void)setKeySegmentModel:;
- (id)keyPhraseDescriptionView;
- (void)p_configKeyPhraseView:;
- (id)clipTimestampBlock;
- (void)setClipTimestampBlock:;
- (void)setKeyPhraseDescriptionView:;
- (void)setModel:;
- (id)init;
- (id)model;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateWithModel:;
+ (id)attributedStringWithModel:;
@end
