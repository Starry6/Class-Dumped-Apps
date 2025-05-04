@interface AWEWatchLaterFeedEntryView : UIView
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) <AWEWatchLaterFeedEntryViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didTapEntryView:;
- (BOOL)fixLandscapeElderMode;
- (id)init;
- (void)dealloc;
- (id)delegate;
- (id)viewSize;
- (void)setBackgroundView:;
- (id)backgroundView;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setIconImageView:;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)updateContent:;
- (void)initUI;
@end
