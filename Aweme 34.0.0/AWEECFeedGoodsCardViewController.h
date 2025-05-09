@interface AWEECFeedGoodsCardViewController : UIViewController
@property (nonatomic) AWEECFeedGoodsCardModel model;
@property (nonatomic) AWEGradientView topGradientview;
@property (nonatomic) UICollectionView largeImageCollectionView;
@property (nonatomic) AWEECFeedGoodsCardContainerView cardContainerView;
@property (nonatomic) UIButton dislikeButton;
@property (nonatomic) UIButton goMallButton;
@property (nonatomic) YYLabel slideTipsLabel;
@property (nonatomic) BOOL isSmallPhone;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) q currentIndex;
@property (nonatomic) q productCount;
@property (nonatomic) NSTimer timer;
@property (nonatomic) q progressTimerRepeatCount;
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) double imageTopOffset;
@property (nonatomic) q currentProgressIndex;
@property (nonatomic) NSMutableArray timeList;
@property (nonatomic) UIImageView pauseImageView;
@property (nonatomic) BOOL playStatus;
@property (nonatomic) UITapGestureRecognizer tapGesture;
@property (nonatomic) double enterTime;
@property (nonatomic) q lastValue;
@property (nonatomic) <AWEECFeedGoodsCardViewControllerDelegate> delegate;
@property (nonatomic) NSString bgmUrl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)playStatus;
- (id)dislikeButton;
- (void)setDislikeButton:;
- (void)removeTimer;
- (id)getCommonParams;
- (void)setPlayStatus:;
- (void)setupUIWithModel:;
- (void)__handleTapGesture:;
- (void)clickTitleViewWithUrl:;
- (void)clickCellWithUrl:productId:;
- (BOOL)isSmallPhone;
- (void)setIsSmallPhone:;
- (id)bgmUrl;
- (void)setBgmUrl:;
- (void)setProgressTimerRepeatCount:;
- (void)setImageTopOffset:;
- (id)largeImageCollectionView;
- (id)cardContainerView;
- (id)goMallButton;
- (id)slideTipsLabel;
- (id)pauseImageView;
- (id)topGradientview;
- (double)imageTopOffset;
- (void)scrollCollectionView;
- (void)updateViewWithprogressValue:totalValue:;
- (long long)productCount;
- (void)setCurrentProgressIndex:;
- (long long)currentProgressIndex;
- (long long)progressTimerRepeatCount;
- (void)updateViewWithPlayTime:;
- (void)setTimerAndPlayWithNeedReset:;
- (void)requesetManageProductCardWithManageType:;
- (void)trackWithParams:eventName:;
- (void)onDislikeButtonClicked:;
- (void)onMallButtonClicked:;
- (id)getNewUrlWithURL:productId:source_method:;
- (id)getIdGroupStr;
- (id)getIndexWithProductId:;
- (void)setTopGradientview:;
- (void)setLargeImageCollectionView:;
- (void)setCardContainerView:;
- (void)setGoMallButton:;
- (void)setSlideTipsLabel:;
- (void)setProductCount:;
- (void)setPauseImageView:;
- (void)setModel:;
- (BOOL)isFullScreen;
- (void)setTimer:;
- (void)dealloc;
- (void)play;
- (id)timer;
- (id)delegate;
- (void)setCurrentIndex:;
- (id)initWithModel:;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)model;
- (void)scrollViewDidEndDecelerating:;
- (void).cxx_destruct;
- (void)willDisappear;
- (long long)lastValue;
- (long long)collectionView:numberOfItemsInSection:;
- (void)scrollViewDidEndScrollingAnimation:;
- (void)timerFired:;
- (void)setDelegate:;
- (id)backgroundImageView;
- (void)pause;
- (long long)currentIndex;
- (id)tapGesture;
- (void)setBackgroundImageView:;
- (void)setIsFullScreen:;
- (void)setLastValue:;
- (void)willDisplay;
- (double)enterTime;
- (void)setEnterTime:;
- (void)setTimeList:;
- (id)timeList;
@end
