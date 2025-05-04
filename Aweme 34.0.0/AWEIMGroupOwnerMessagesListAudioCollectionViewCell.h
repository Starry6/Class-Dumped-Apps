@interface AWEIMGroupOwnerMessagesListAudioCollectionViewCell : AWEIMGroupOwnerMessagesListCollectionViewCell
@property (nonatomic) UIView bubbleView;
@property (nonatomic) UIImageView audioIndicateView;
@property (nonatomic) UILabel audioDurationLabel;
@property (nonatomic) UILabel contentLabel;
- (void)renderCustomizeContentWithVM:;
- (id)audioIndicateView;
- (id)audioDurationLabel;
- (void)setAudioIndicateView:;
- (void)setAudioDurationLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)bubbleView;
- (void)setBubbleView:;
+ (id)identifier;
@end
