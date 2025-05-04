@interface AWECommentImagePublishProgressView : UIView
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) MBCircularProgressBarView circleProgressBar;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tipsLabel;
- (void)taskProgressDidChangeWithInfo:;
- (void)setTipsLabel:;
- (id)circleProgressBar;
- (void)beginPublish;
- (void)resetPublish;
- (void)setCircleProgressBar:;
- (void)dealloc;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateProgress:;
@end
