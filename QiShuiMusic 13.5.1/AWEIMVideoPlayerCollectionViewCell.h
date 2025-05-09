@interface AWEIMVideoPlayerCollectionViewCell : AWEIMImageVideoDisplayBaseCollectionViewCell
@property (nonatomic) AWEIMMessage msg;
@property (nonatomic) NSString videoTKey;
@property (nonatomic) NSString videoSKey;
@property (nonatomic) NSString videoMD5;
@property (nonatomic) NSString videoLocalURL;
@property (nonatomic) NSString posterLocalURL;
@property (nonatomic) BOOL hasPlayed;
@property (nonatomic) q loadingViewType;
@property (nonatomic) UIView playerInteractionView;
@property (nonatomic) UIView playerMaskView;
@property (nonatomic) UIImageView posterImageView;
@property (nonatomic) UIImage posterImage;
@property (nonatomic) AWEIMPlayVideoAnimationPauseIcon playStatusIconImageView;
@property (nonatomic) IESIMUILoadingView loadingView;
@property (nonatomic) UIImageView gradientBgView;
@property (nonatomic) UITapGestureRecognizer tapGes;
@property (nonatomic) AWEIMMessageAttachmentDownloadViewModel downloadVM;
@property (nonatomic) NSString kSendVideoToFriendBtnText;
@property (nonatomic) NSString kSaveVideoToAlbumBtnText;
@property (nonatomic) NSURL destinationURL;
@property (nonatomic) NSURL decryptedFileURL;
@property (nonatomic) <IESIMHttpTask> fetchURLTask;
@property (nonatomic) MediaDecrypter decrypter;
@property (nonatomic) AWEProgressLoadingView<AWEMediaDownloadLoadingViewProtocol> downloadLoadingView;
@property (nonatomic) NSDate triggerPlayingDate;
@property (nonatomic) NSMutableArray processMonitorArray;
@property (nonatomic) <IESIMALMIESVideoPlayerProtocol> playerController;
@property (nonatomic) BOOL needAutoPlay;
@property (nonatomic) NSString videoURL;
@property (nonatomic) BOOL pausedByForce;
@property (nonatomic) @? closeBlock;
@property (nonatomic) double startPlayTimestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPlayingPaster;
- (void)playVideoPlayer;
- (long long)loadingViewType;
- (void)p_checkAutoPlay;
- (void)p_pauseIfNeeded;
- (void)player:playbackFailedWithError:;
- (void)saveBtnClicked:;
- (void)addPeriodicTimeObserver;
- (id)buttonTexts;
- (id)closeBlock;
- (void)closeButtonClicked:;
- (void)configPlayerControllerWithVideoURLString:resetDecryptionKey:;
- (void)configWithMessage:;
- (void)configWithMessage:text:placeholder:showRecentylUsedEmoticons:;
- (void)decryptVideoFileAtPath:toPath:decryptionKey:onCompletion:;
- (id)decryptedFileURL;
- (void)didClickedButton:;
- (void)didClickedCanelButton;
- (void)dismissLoadingView:;
- (void)downloadAndSaveVideoToAlbum;
- (id)downloadLoadingView;
- (id)downloadVM;
- (void)downloadVideo:atFileURL:progress:onCompletion:;
- (id)fetchURLTask;
- (void)fetchVideoURLOnCompletion:;
- (void)forwardVideoMessage;
- (id)getVideoPosterView;
- (id)gradientBgView;
- (void)handleVideoPlayerTimeObservation;
- (void)hideInteractiveUI;
- (id)kSaveVideoToAlbumBtnText;
- (id)kSendVideoToFriendBtnText;
- (void)longPressGesRecognized:;
- (BOOL)needAutoPlay;
- (double)p_bottomOffset;
- (id)p_commonTrackParams;
- (BOOL)p_configDownloadingStateLocalImage;
- (id)p_configLocalImage:;
- (void)p_configPlayerController;
- (void)p_configPosterView;
- (void)p_configWithMessage:;
- (void)p_loadVideoFailed;
- (void)p_play;
- (void)p_setupUI;
- (void)p_updateUI;
- (void)pauseVideoPlayer;
- (BOOL)pausedByForce;
- (id)playStatusIconImageView;
- (void)player:didChangePlaybackStateWithAction:;
- (id)playerInteractionView;
- (id)playerMaskView;
- (void)playerMaskViewTapped;
- (void)playerWillLoopPlaying:;
- (id)posterLocalURL;
- (id)processMonitorArray;
- (void)removePeriodicTimeObserver;
- (id)resizableGradientImage;
- (void)respondMoreAction;
- (void)saveVideoFileToAlbum:onCompletion:;
- (void)setCloseBlock:;
- (void)setDecryptedFileURL:;
- (void)setDownloadLoadingView:;
- (void)setDownloadVM:;
- (void)setFetchURLTask:;
- (void)setGradientBgView:;
- (void)setHasPlayed:;
- (void)setKSaveVideoToAlbumBtnText:;
- (void)setKSendVideoToFriendBtnText:;
- (void)setLoadingViewType:;
- (void)setNeedAutoPlay:;
- (void)setPausedByForce:;
- (void)setPlayStatusIconImageView:;
- (void)setPlayerInteractionView:;
- (void)setPlayerMaskView:;
- (void)setPosterLocalURL:;
- (void)setProcessMonitorArray:;
- (void)setStartPlayTimestamp:;
- (void)setTapGes:;
- (void)setTriggerPlayingDate:;
- (void)setUpGestures;
- (void)setVideoLocalURL:;
- (void)setVideoMD5:;
- (void)setVideoSKey:;
- (void)setVideoTKey:;
- (BOOL)shouldLoopPlaying;
- (void)showInteractiveUI;
- (void)showLoadingView:;
- (double)startPlayTimestamp;
- (id)tapGes;
- (id)triggerPlayingDate;
- (void)updateUIWithPosterImage:;
- (id)videoLocalURL;
- (id)videoMD5;
- (void)videoPlayerNeedAutoPlay;
- (id)videoSKey;
- (id)videoTKey;
- (id)videoURL;
- (void)setDecrypter:;
- (void)dealloc;
- (id)playerController;
- (id)decrypter;
- (id)posterImage;
- (void)setDestinationURL:;
- (id)destinationURL;
- (id)initWithFrame:;
- (void)setVideoURL:;
- (void)setPlayerController:;
- (void).cxx_destruct;
- (void)cancelAllTasks;
- (id)loadingView;
- (void)setLoadingView:;
- (void)setPosterImage:;
- (id)posterImageView;
- (void)setPosterImageView:;
- (BOOL)hasPlayed;
- (id)msg;
- (void)setMsg:;
@end
