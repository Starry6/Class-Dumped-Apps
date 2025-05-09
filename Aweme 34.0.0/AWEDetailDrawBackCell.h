@interface AWEDetailDrawBackCell : UITableViewCell
@property (nonatomic) AWEFeedCellViewController viewController;
@property (nonatomic) UIImageView bgImageView;
@property (nonatomic) UILabel scrollTipLabel;
@property (nonatomic) UIImageView moreImageView;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UILabel timeLabel;
@property (nonatomic) NSTimer timer;
@property (nonatomic) q count;
@property (nonatomic) BOOL removedChildViewForMemoryOpt;
@property (nonatomic) q indexPath;
@property (nonatomic) UIViewController parentVC;
@property (nonatomic) NSString referString;
@property (nonatomic) AWEAwemeModel registerElementModel;
@property (nonatomic) q cellDisplayState;
@property (nonatomic) q cellPageAppearState;
@property (nonatomic) @? currentCellPageAppearStateBlock;
@property (nonatomic) ^{EngineAudioWrapper=^?^?^?^?^v} audioWrapper;
@property (nonatomic) ^{EngineVideoWrapper=^?^?^v} videoWrapper;
@property (nonatomic) UIView feedTableViewCellMaskView;
@property (nonatomic) <UIScrollViewDelegate> scrollViewDelegate;
@property (nonatomic) BOOL hadPrepareToDisplay;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWEDetailDrawBackCellDelegate> delegate;
@property (nonatomic) BOOL isLastCell;
- (id)referString;
- (void)setReferString:;
- (id)audioWrapper;
- (void)setAudioWrapper:;
- (id)videoWrapper;
- (void)setVideoWrapper:;
- (id)registerElementModel;
- (void)setRegisterElementModel:;
- (void)configWithModel:;
- (long long)cellDisplayState;
- (void)setCellDisplayState:;
- (long long)cellPageAppearState;
- (void)setCellPageAppearState:;
- (id)currentCellPageAppearStateBlock;
- (void)setCurrentCellPageAppearStateBlock:;
- (id)feedTableViewCellMaskView;
- (void)setFeedTableViewCellMaskView:;
- (BOOL)hadPrepareToDisplay;
- (void)setHadPrepareToDisplay:;
- (void)removeCellChildVCForMemoryOpt;
- (void)setMoreImageView:;
- (id)moreImageView;
- (BOOL)isLastCell;
- (void)setIsLastCell:;
- (id)scrollTipLabel;
- (void)setScrollTipLabel:;
- (void)starCountDown;
- (void)reStarCountDownIfNeed;
- (void)setSomeViewHidden:;
- (void)setRemovedChildViewForMemoryOpt:;
- (void)stopCountDowm;
- (BOOL)removedChildViewForMemoryOpt;
- (void)setTimer:;
- (void)setTimeLabel:;
- (void)play;
- (id)timer;
- (id)delegate;
- (void)setCount:;
- (long long)indexPath;
- (void)prepareForDisplay;
- (long long)count;
- (id)viewController;
- (void)setIndexPath:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)timeLabel;
- (void)reset;
- (void)setDelegate:;
- (void)stop;
- (void)pause;
- (void)setViewController:;
- (void)setTipLabel:;
- (id)tipLabel;
- (void)configureWithModel:;
- (void)setUpUI;
- (void)setBgImageView:;
- (id)bgImageView;
- (id)parentVC;
- (void)setParentVC:;
@end
