@interface AWETeenSlidesView : UIView
@property (nonatomic) AWEGradientView topGradientView;
@property (nonatomic) AWEGradientView bottomGradientView;
@property (nonatomic) UIView gradientBackgroundView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} lastInteractionViewFrame;
@property (nonatomic) UIViewController interactionParentViewController;
@property (nonatomic) BOOL isPinching;
@property (nonatomic) {CGPoint=dd} startPosition;
@property (nonatomic) <AFDPinchZoomEventTrackerProtocol> pinchZoomTracker;
@property (nonatomic) Q state;
@property (nonatomic) UIView zoomingView;
@property (nonatomic) UIView overlayView;
@property (nonatomic) AFDSlidesClipCell zoomingCell;
@property (nonatomic) {CGPoint=dd} beginPoint;
@property (nonatomic) @? trackPlayFinishBlock;
@property (nonatomic) q currentIndex;
@property (nonatomic) q lastIndex;
@property (nonatomic) double playStartTimestamp;
@property (nonatomic) BOOL hasTrackVideoPlayFinished;
@property (nonatomic) BOOL hasTrackFirstImageLoadFinished;
@property (nonatomic) BOOL hasTrackFirstVisibleLoadFinished;
@property (nonatomic) NSTimer progressTimer;
@property (nonatomic) BOOL isTimerPlaying;
@property (nonatomic) BOOL isNotFirstPlay;
@property (nonatomic) BOOL enableInfinityLoop;
@property (nonatomic) BOOL fakeModelInserted;
@property (nonatomic) AWEImageAlbumImageModel fakeImageModel;
@property (nonatomic) q playTimes;
@property (nonatomic) UIImageView firstImage;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSObject<AFDSlidesViewActionDelegate> actionDelegate;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL isInFullPage;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL scrollEnabled;
@property (nonatomic) BOOL needNoStickers;
@property (nonatomic) Q contentMode;
@property (nonatomic) Q scene;
@property (nonatomic) Q playMode;
@property (nonatomic) NSMutableSet exposedImageURISet;
@property (nonatomic) AWETeenStoryContainerCollectionView collectionView;
@property (nonatomic) UIViewController interactionController;
@property (nonatomic) double lastProgress;
@property (nonatomic) double cornerRadius;
@property (nonatomic) NSTimer sliderTimer;
@property (nonatomic) BOOL userScrolled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (void)setEnterFrom:;
- (void)setReferString:;
- (void)setLogExtra:;
- (id)logExtra;
- (double)playStartTimestamp;
- (id)enterFrom;
- (void)setUserScrolled:;
- (BOOL)isInFullPage;
- (BOOL)needNoStickers;
- (void)setNeedNoStickers:;
- (void)setIsInFullPage:;
- (void)buildGradientLayerWithTopViewHeight:bottomViewHeight:topViewColor:bottomViewColor:;
- (void)sliderWillBeingDragging;
- (void)sliderDidEndDragging;
- (void)sliderDidEndScrolling;
- (void)setGradientBackgroundView:;
- (void)hideGradientView;
- (void)showGradientView;
- (long long)playTimes;
- (void)processAlbumImagesData:;
- (id)exposedImageURISet;
- (void)setExposedImageURISet:;
- (id)sliderTimer;
- (void)setSliderTimer:;
- (void)buildInteractionControllerIfNeeded:withTopViewHeight:bottomViewHeight:topViewColor:bottomViewColor:parentViewController:;
- (void)removeInteractionControllerIfNeeded;
- (void)resetProgressOfCurrentImage;
- (BOOL)needAutoPlay;
- (void)scrollWithOffset:method:animated:;
- (void)updateWithSlidesView:needUpdateModel:;
- (void)updateWithAlbumContainer:;
- (id)trackPlayFinishBlock;
- (void)setTrackPlayFinishBlock:;
- (void)scrollToIndex:method:animated:;
- (void)setupAndPlayTimer;
- (void)setPlayStartTimestamp:;
- (void)setPlayTimes:;
- (BOOL)isConsistentPlayModeOn;
- (void)setPinchZoomTracker:;
- (id)pinchZoomTracker;
- (void)updateContentOffsetWithNewFrame:;
- (double)autoSlideDuration;
- (void)resetSliderTimerWithInterval:;
- (void)loadImagesCacheIfNeeded;
- (void)setEnableInfinityLoop:;
- (void)setFakeImageModel:;
- (void)setFakeModelInserted:;
- (void)updateProgressWithIndex:fromIndex:method:needTrack:;
- (id)fakeImageModel;
- (BOOL)fakeModelInserted;
- (void)removeFakeModelIfNeeded;
- (void)addFakeModelIfNeeded;
- (BOOL)isNotFirstPlay;
- (void)setupSliderTimer;
- (void)setIsNotFirstPlay:;
- (void)setHasTrackVideoPlayFinished:;
- (void)setHasTrackFirstImageLoadFinished:;
- (void)setHasTrackFirstVisibleLoadFinished:;
- (void)startTrackGraphicPlayTime;
- (void)resetBottomGradientFrameWithDelta:bottomGradientHeight:;
- (void)buildInteractionControllerIfNeeded:parentViewController:;
- (void)changeInteractionViewFrameForCommerceSplashIfNeeded;
- (void)setLastInteractionViewFrame:;
- (void)updateIndexManually;
- (double)autoSlideAnimationDuration;
- (void)didUpdateIndex:;
- (void)updateProgressWithIndex:fromIndex:method:needTrack:progress:duration:;
- (void)trackIndexUpdateIfNeededFromIndex:toIndex:method:;
- (BOOL)hasTrackVideoPlayFinished;
- (id)zoomingCell;
- (void)setZoomingCell:;
- (BOOL)isGestureActive;
- (BOOL)isValidCGRect:;
- (BOOL)hasTrackFirstImageLoadFinished;
- (BOOL)hasTrackFirstVisibleLoadFinished;
- (id)lastInteractionViewFrame;
- (id)interactionParentViewController;
- (void)setInteractionParentViewController:;
- (id)beginPoint;
- (void)setBeginPoint:;
- (BOOL)enableInfinityLoop;
- (id)firstImage;
- (void)musicPlayTimes:;
- (void)scrollToIndex:interrupt:;
- (id)initWithFrame:playMode:awemeModel:referString:trackPlayFinishBlock:;
- (void)checkIndex;
- (void)setupFirstImageIfNeeded;
- (id)initWithFrame:awemeModel:referString:trackPlayFinishBlock:;
- (id)firstCellImage;
- (void)setFirstImage:;
- (void)setScrollEnabled:;
- (id)actionDelegate;
- (void)reloadData;
- (void)setModel:;
- (void)setIsScrolling:;
- (id)overlayView;
- (void)setScene:;
- (id)currentImageView;
- (id)collectionView;
- (void)removeAllAnimations;
- (void)setContentOffset:;
- (BOOL)isPlaying;
- (void)dealloc;
- (void)play;
- (void)setCurrentIndex:;
- (BOOL)isTimerPlaying;
- (unsigned long long)scene;
- (id)contentOffset;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)setInteractionController:;
- (long long)numberOfSectionsInCollectionView:;
- (void)setCornerRadius:;
- (void)setOverlayView:;
- (void)setContentOffset:animated:;
- (void)stopTimer;
- (unsigned long long)state;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)setCollectionView:;
- (BOOL)scrollEnabled;
- (double)currentPage;
- (void)collectionView:didEndDisplayingCell:forItemAtIndexPath:;
- (void)scrollViewDidScroll:;
- (id)model;
- (void)scrollViewWillBeginDragging:;
- (void)setIsTimerPlaying:;
- (void)scrollViewDidEndDecelerating:;
- (void).cxx_destruct;
- (double)cornerRadius;
- (void)setIsPinching:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (BOOL)isScrolling;
- (void)scrollViewDidEndScrollingAnimation:;
- (void)reset;
- (void)layoutSubviews;
- (void)setState:;
- (void)setIsPlaying:;
- (void)pause;
- (BOOL)isPinching;
- (unsigned long long)contentMode;
- (long long)currentIndex;
- (id)interactionController;
- (void)setContentMode:;
- (long long)lastIndex;
- (BOOL)accessibilityScroll:;
- (id)indexPathForCell:;
- (void)pauseTimer;
- (void)setActionDelegate:;
- (void)setStartPosition:;
- (id)startPosition;
- (id)currentCell;
- (double)lastProgress;
- (void)setLastProgress:;
- (void)setLastIndex:;
- (id)bottomGradientView;
- (void)setBottomGradientView:;
- (void)playTimer;
- (id)topGradientView;
- (void)setTopGradientView:;
- (id)gradientBackgroundView;
- (id)progressTimer;
- (void)setProgressTimer:;
- (void)setZoomingView:;
- (id)zoomingView;
- (BOOL)userScrolled;
- (unsigned long long)playMode;
- (void)setPlayMode:;
@end
