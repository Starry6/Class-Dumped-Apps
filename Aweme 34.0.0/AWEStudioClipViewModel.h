@interface AWEStudioClipViewModel : NSObject
@property (nonatomic) AWEStudioClipInputData inputData;
@property (nonatomic) AWEStudioClipOutputData outputData;
@property (nonatomic) AWEStudioClipModel clipModel;
@property (nonatomic) AWEVideoSegmentedClipAdapter clipAdapter;
@property (nonatomic) AWEClipAIViewModel aiViewModel;
@property (nonatomic) AWEClipSliderViewModel sliderViewModel;
@property (nonatomic) AWEClipNormalViewModel normalViewModel;
@property (nonatomic) AWEClipPlayerViewModel playerViewModel;
@property (nonatomic) AWEClipExportViewModel exportViewModel;
@property (nonatomic) NSObject<ACCEditVideoDataProtocol> videoData;
@property (nonatomic) double initialContentOffset;
@property (nonatomic) BOOL isSetContentOffsetByCode;
@property (nonatomic) BOOL forceUpdateVideoIndicator;
@property (nonatomic) double framesCursorPosition;
@property (nonatomic) Q videosCursorIndex;
@property (nonatomic) <AWEVideoClipFooterView> normalFooterView;
@property (nonatomic) <AWEVideoClipFooterView> aiFooterView;
@property (nonatomic) @ avPlayerPeriodicObserver;
@property (nonatomic) BOOL hasOverEndTime;
@property (nonatomic) double prefetchingPoint;
@property (nonatomic) double lastContentOffset;
@property (nonatomic) double lastVideoCoverCollectionViewUserInteractiveTime;
@property (nonatomic) UIImage placeholderImage;
@property (nonatomic) AWEThumbnailCache thumbnailCache;
@property (nonatomic) NSObject<OS_dispatch_queue> imageGeneratorQueue;
@property (nonatomic) Q defaultClipMode;
@property (nonatomic) BOOL allowAIMode;
@property (nonatomic) BOOL firstTimeLoadVideos;
@property (nonatomic) BOOL isSelectAssetTransition;
@property (nonatomic) NSMutableArray backupClipedRanges;
@property (nonatomic) <AWEVideoRangeSliderDelegate> sliderDelegate;
@property (nonatomic) AVPlayerItem compositionPlayerItem;
@property (nonatomic) NSObject<ACCEditVideoDataProtocol> compositionPlayerData;
@property (nonatomic) AWEAVMixedMutableCompositionBuilder compositionBuilder;
@property (nonatomic) AWEAVMixedMutableCompositionBuilder selectedAssetCompositionBuilder;
@property (nonatomic) AWEAssetModel currentAssetModel;
@property (nonatomic) NSArray sourceAssetModelArray;
@property (nonatomic) BOOL isSingleVideoMode;
@property (nonatomic) BOOL isLongVideoMode;
@property (nonatomic) BOOL exporting;
@property (nonatomic) AWEVideoClipKeyManagedObject footerViewManagedObject;
@property (nonatomic) AWEVideoClipKeyManagedObject playerItemManagedObject;
@property (nonatomic) AWEVideoClipKeyManagedObject playerDataManagedObject;
@property (nonatomic) AWEVideoClipKeyManagedObject exportSessionManagedObject;
@property (nonatomic) AWEVideoClipKeyManagedObject exportVESessionManagedObject;
@property (nonatomic) @? regenerateCompletion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)clipModel;
- (void)setClipModel:;
- (void)setupData:;
- (id)initWithInputData:;
- (double)videoMinSeconds;
- (double)videoMaxSeconds;
- (id)normalViewModel;
- (void)setNormalViewModel:;
- (id)currentAssetModel;
- (BOOL)allowLongVideo;
- (void)setAllowAIMode:;
- (BOOL)isLongVideoMode;
- (id)clipAdapter;
- (void)setClipAdapter:;
- (void)setPlayerViewModel:;
- (void)setSliderViewModel:;
- (id)footerViewManagedObject;
- (BOOL)hasOverEndTime;
- (id)playerViewModel;
- (id)sliderViewModel;
- (id)playerItemManagedObject;
- (id)sourceAssetModelArray;
- (id)playerDataManagedObject;
- (id)aiFooterView;
- (id)currentFooterView;
- (BOOL)videoRangeIgnoreGesture;
- (void)videoRangeDidBeginByType:;
- (void)videoRangeDidEndByType:;
- (void)videoRangeDidChangByPosition:movedType:;
- (void)videoRangeDidBeginHoldToChangeByType:offset:;
- (void)videoRangeDidEndHoldToChangeByType:;
- (void)videoRangeDidTransferHoldDragToInnerDragByType:;
- (void)videoRangeDidHoldToChangeByOffset:movedType:;
- (BOOL)videoRangeSliderShouldShowExpandAnimationByType:;
- (BOOL)checkVideoRangeHasReachedMaxDuration;
- (void)videoRangeHasReachedMinDuration;
- (void)videoRangeHasReachedMaxDuration;
- (double)currentlyValidDelta;
- (id)maxPlayerFrameWithRotateType:;
- (unsigned long long)defaultClipMode;
- (void)setHasOverEndTime:;
- (void)setDefaultClipMode:;
- (id)compositionBuilder;
- (BOOL)allowAIMode;
- (id)aiPlayerItem;
- (id)normalPlayerItem;
- (BOOL)sliderFixedLengthMode;
- (id)exportSessionManagedObject;
- (void)handleExportWithCompletion:;
- (id)requestThumbnailForAsset:rotation:time:completion:;
- (id)normalFooterView;
- (double)videoSliderLeftMargin;
- (void)setIsSetContentOffsetByCode:;
- (void)debugSetContentOffset:;
- (void)reportCurrentClipRangeInfo;
- (void)updateCoverIndicatorWithTime:;
- (id)selectedAssetCompositionBuilder;
- (id)maxPlayerFrameWithRotateType:aspectFill:;
- (BOOL)isSetContentOffsetByCode;
- (id)avPlayerPeriodicObserver;
- (void)setAvPlayerPeriodicObserver:;
- (void)updateCurrentCoverImage;
- (void)updateVideoIndicatorWithTime:;
- (void)setForceUpdateVideoIndicator:;
- (BOOL)forceUpdateVideoIndicator;
- (id)requestThumbnailForIndexPath:completion:;
- (double)prefetchingPoint;
- (void)setPrefetchingPoint:;
- (void)prefetchThumbnails;
- (id)exportVESessionManagedObject;
- (void)setNormalFooterView:;
- (void)setAiFooterView:;
- (void)viewDidLoadHandler;
- (BOOL)isSingleVideoMode;
- (id)restoreTransformWithIintialBoundingRect:newBoundingRect:;
- (double)framesCursorPosition;
- (unsigned long long)videosCursorIndex;
- (void)collectionView:didSelectItemAtIndexPath:completion:;
- (void)updateCurrentAssetModel:;
- (void)reorderableAssetEndDraggingAtAtIndex:completion:;
- (void)framesScrollViewDidScroll;
- (void)updateValidClipTimeRangeAfterScroll;
- (BOOL)speedControl:shouldSelectSpeed:;
- (void)speedControl:didSelectedIndex:oldIndex:;
- (id)transformWithOldBoundingRect:newBoundingRect:;
- (void)deleteCurrentEditAssetModelForNormal;
- (double)getScaleBasedOnRotateFactor:oldRect:newRect:;
- (void)restoreCurrentModelSegmentedInfo;
- (void)updatePlayerItemForClipMode:useBookkeepingRange:;
- (void)saveCurrentModelSegmentedInfoWithClippedRangeChanged:;
- (id)compositionPlayerItem;
- (void)updateValidClipTimeRangeIfNeeded;
- (id)safeFrame:;
- (void)reloadWithSpeed:totalSpeedChanged:editSegmentIndex:editSegButNoChanged:;
- (void)applyPreTotalClipState;
- (void)resetPrefetchingPoint;
- (void)setupOutputData;
- (void)setImageGeneratorQueue:;
- (void)setBackupClipedRanges:;
- (id)aiViewModel;
- (void)updatePlayerItemForViewDidLoad;
- (unsigned long long)setupRotateType;
- (void)handlePlayerPeriodicCallbackForNormalModeWithTime:;
- (void)handlePlayerPeriodicCallbackForAIModeWithTime:isPlayingTotalItemOfAIVideoClip:;
- (void)setAiViewModel:;
- (BOOL)firstTimeLoadVideos;
- (void)setFirstTimeLoadVideos:;
- (id)exportViewModel;
- (void)reloadWithSpeed:totalSpeedChanged:editSegmentIndex:editSegButNoChanged:timeClipRange:;
- (double)initialMaxSeconds;
- (double)maxDurationWithDuration:timeClipRange:;
- (double)minGapWithTimeClipRange:isForTotal:;
- (void)reloadDataForFooterViews;
- (void)reloadWithVideoData:autoPlay:;
- (void)setVideosCursorIndex:;
- (void)p_normalModeReorderableAssetFromIndex:toIndex:completion:;
- (void)p_aiModeReorderableAssetFromIndex:toIndex:completion:;
- (void)p_moveObjectInArray:from:to:;
- (void)updateValidClipTimeRangeIfNeededWithBookkeepingClipRange;
- (id)p_selectedRangeForAsset:;
- (void)updateCompositionBuilderClipTimeRangeInfoWithRate;
- (void)updatePlayerItemForClipMode:;
- (unsigned long long)clipMode;
- (void)updateCompositionBuilderWithClipTimeRange:assetModel:adjust:;
- (void)updateValidClipTimeRangeIfNeededForReset:;
- (id)backupClipedRanges;
- (void)updateCompositionBuilder:WithClipTimeRange:assetModel:adjust:forSegment:;
- (void)setFramesCursorPosition:;
- (void)savePreTotalClipState;
- (id)regenerateCompletion;
- (void)regenerateRandomAIVideoClipForAssetModels:music:completion:;
- (void)p_movieSeekToSliderVideoIndicatorTime;
- (id)cellForVideoThumbnailWithCollectionView:indexPath:;
- (id)cellForPlusAssetWithCollectionView:indexPath:;
- (id)cellForVideoCoverWithCollectionView:indexPath:;
- (id)requestVideoSegmentsCoverForIndexPath:collectionView:completion:;
- (unsigned long long)clipModeOfCollectionView:;
- (void)p_didSelectItemInNormalModeVideosCollectionViewAtIndexPath:completion:;
- (void)p_didSelectItemInAIModeVideosCollectionViewAtIndexPath:completion:;
- (void)setIsSelectAssetTransition:;
- (BOOL)isSelectAssetTransition;
- (void)saveSpeedPreTotalClipState;
- (void)backupValidClipTimeRangeWithSpeedIfNeeded;
- (void)p_updateSpeedPreClipInfo;
- (void)p_updateSpeedPreClipInfoForAdaption;
- (void)p_updateSpeedPreClipInfoForNonAdaption;
- (void)applySpeedPreTotalClipState;
- (id)sliderDelegate;
- (void)reportCurrentAIClipRangeInfo;
- (void)appendAssetModelArray:completion:;
- (void)removeAssetAtIndex:completion:;
- (void)deleteCurrentEditAssetModelForAllowAIWithReplaceItemBlock:;
- (void)switchClipMode:replaceBlock:completion:;
- (id)compositionPlayerData;
- (void)setRegenerateCompletion:;
- (void)setExportViewModel:;
- (double)lastVideoCoverCollectionViewUserInteractiveTime;
- (void)setLastVideoCoverCollectionViewUserInteractiveTime:;
- (void)setSliderDelegate:;
- (id)outputData;
- (id)placeholderImage;
- (void)setPlaceholderImage:;
- (void)dealloc;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (double)initialContentOffset;
- (double)lastContentOffset;
- (void)setInitialContentOffset:;
- (void)setLastContentOffset:;
- (void)setThumbnailCache:;
- (id)thumbnailCache;
- (void)setVideoData:;
- (id)inputData;
- (BOOL)exporting;
- (id)videoData;
- (void)setInputData:;
- (void)setOutputData:;
- (id)imageGeneratorQueue;
@end
