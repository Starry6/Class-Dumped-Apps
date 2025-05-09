@interface AVPlayerLayer : CALayer
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} avkit_videoRectInWindow;
@property (nonatomic) BOOL avkit_isVisible;
@property (nonatomic) UIWindow avkit_window;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AVPlayer player;
@property (nonatomic) NSString videoGravity;
@property (nonatomic) BOOL readyForDisplay;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} videoRect;
@property (nonatomic) NSDictionary pixelBufferAttributes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)avkit_pictureInPictureViewController;
- (long long)avkit_contentSourceType;
- (BOOL)avkit_wantsManagedSecondScreenPlayback;
- (void)avkit_beginReducingResourcesForPictureInPictureViewController:playerController:;
- (void)avkit_stopRoutingVideoToPictureInPictureViewController:;
- (id)avkit_videoRectInWindow;
- (id)avkit_window;
- (id)avkit_makePlayerControllerIfNeeded:;
- (void)avkit_startRoutingVideoToPictureInPictureViewController:;
- (void)avkit_willBeginStoppingPictureInPictureForPictureInPictureViewController:;
- (BOOL)avkit_isVisible;
- (void)avkit_endReducingResourcesForPictureInPictureViewController:playerController:;
- (id)avkit_makePictureInPicturePlatformAdapterContentPlaceholderLayer;
- (void)setContentsScale:;
- (id)init;
- (void)addCallbackToCancelDuringDeallocation:;
- (void)setVideoGravity:;
- (void)dealloc;
- (void)removeFromSuperlayer;
- (void)declareKeyPathDependenciesWithRegistry:;
- (void)addAnimation:forKey:;
- (void)setPixelBufferAttributes:;
- (void)setPIPModeEnabled:;
- (void)setForScrubbingOnly:;
- (void)setSublayers:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (void)addSublayer:;
- (id)initWithLayer:;
- (void)setLegibleContentInsets:;
- (void)layoutSublayers;
- (void)replaceSublayer:with:;
- (void)_addPositionAnimationToLayer:usingAnimation:forKey:;
- (void)removeAllAnimations;
- (void)insertSublayer:atIndex:;
- (void)insertSublayer:above:;
- (BOOL)isForScrubbingOnly;
- (BOOL)isPIPModeEnabled;
- (void)_addBoundsAnimationToLayer:usingAnimation:forKey:;
- (void)layerDidBecomeVisible:;
- (id)player;
- (void)setBounds:;
- (id)legibleContentInsets;
- (id)pixelBufferAttributes;
- (void)setPlayer:;
- (void)insertSublayer:below:;
- (BOOL)isOverscanSubtitleSupportEnabled;
- (void)setOverscanSubtitleSupportEnabled:;
- (void)setToneMapToStandardDynamicRange:;
- (BOOL)isReadyForDisplay;
- (id)videoGravity;
- (void)removeAnimationForKey:;
- (id)_videoLayer;
- (id)_maskLayer;
- (long long)_activeMode;
- (BOOL)_preventsChangesToSublayerHierarchy;
- (BOOL)isLegibleDisplayEnabled;
- (id)placeholderContentLayerDuringPIPMode;
- (void)_addSublayerTransformAnimationToLayer:fromTransform:usingAnimation:gravity:presentationSize:forKey:;
- (void)_addAnimationsForPIPPlaceholderLayer:forKey:;
- (void)_addAnimationsForMaskLayer:forKey:;
- (void)_addAnimationsForClosedCaptionLayer:gravity:forKey:;
- (void)_addAnimationsForVideoLayer:size:gravity:forKey:;
- (void)_forBoundsAnimations:applyBlock:;
- (float)_percentCoverageRelativeToRootLayer;
- (id)_displaySize;
- (void)_notifyPlayerOfDisplaySize;
- (id)_playerCurrentItemPresentationSize;
- (void)_applyCurrentItemPresentationSizeChangeAndForceUpdate:;
- (void)_startObservingPlayer:;
- (void)_stopObservingPlayer:;
- (void)_handleNonForcedSubtitleDisplayDidChange:player:;
- (void)_handlePlayerCurrentItemDidChangeForPlayer:;
- (void)_handleIsDisplayingClosedCaptionsDidChange:player:;
- (id)playerPublisher;
- (void)_setPlayer:forPIP:;
- (void)hasEnqueuedVideoFrameChanged:;
- (void)_updateReadyForDisplayForPlayerCurrentItem;
- (void)_getMaskLayer:videoLayer:subtitleLayer:closedCaptionLayer:interstitialLayer:;
- (id)_closedCaptionLayer;
- (id)_subtitleLayer;
- (id)_interstitialLayer;
- (BOOL)_showInterstitialInstead;
- (void)_setShowInterstitialInstead:;
- (id)videoPerformanceMetrics;
- (void)_setIsConnectedToSecondScreen:;
- (BOOL)_isConnectedToSecondScreen;
- (BOOL)isLanczosFilterDownscalingEnabled;
- (void)setLanczosFilterDownscalingEnabled:;
- (long long)lanczosFilterDownscaleFactor;
- (void)setLanczosFilterDownscaleFactor:;
- (id)videoRect;
- (id)_videoRectForBounds:;
- (void)setLegibleDisplayEnabled:;
- (id)copyDisplayedPixelBuffer;
- (void)_configurePlayerWhenEnteringPIP;
- (void)_configurePlayerWhenLeavingPIP;
- (void)_stashClientLayers;
- (void)_unstashClientLayers;
- (void)_associateWithLayer:forMode:;
- (id)_associatedRemoteModeLayer;
- (void)_disassociateWithLayerForMode:;
- (void)startRedirectingVideoToLayer:forMode:;
- (void)stopRedirectingVideoToLayer:;
- (void)_enterSecondScreenModeRedirectingVideoToLayer:;
- (void)_leaveSecondScreenModeForLayer:;
- (void)enterPIPModeRedirectingVideoToLayer:;
- (void)_enterPIPModeRedirectingVideoToLayer:;
- (void)leavePIPMode;
- (void)_leavePIPModeForLayer:;
- (void)_forceLayout;
- (id)_sublayersForPIP;
- (void)_mergeClientLayersIntoMaskLayer:;
- (void)_restoreClientLayers:intoMaskLayer:;
- (void)_setSublayersPreventChangesToSublayerHierarchy:;
- (void)_setSublayersForPIP:;
- (BOOL)_willManageSublayersAsSwappedLayers;
- (void)_setWillManageSublayersAsSwappedLayers:;
- (void)_setPreventsChangesToSublayerHierarchy:;
- (void)setPlaceholderContentLayerDuringPIPMode:;
- (BOOL)_currentWindowSceneIsForegroundDefault;
- (BOOL)_currentWindowSceneIsForeground;
- (void)_windowSceneDidEnterBackground;
- (void)_windowSceneDidEnterBackground:;
- (void)_windowSceneWillEnterForeground;
- (void)_windowSceneWillEnterForeground:;
- (void)_forceWindowSceneEvent:;
- (void)_updateIsPartOfForegroundScene;
- (void)_notifyPlayerOfLayerForegroundStateChange;
- (void)_setIsPartOfForegroundScene:;
- (BOOL)_isPartOfForegroundScene;
+ (id)makeClosedCaptionLayer;
+ (id)playerLayerWithPlayer:;
+ (id)keyPathsForValuesAffectingVideoRect;
+ (void)_swapSublayersBetweenPlayerLayer:andPlayerLayer:;
@end
