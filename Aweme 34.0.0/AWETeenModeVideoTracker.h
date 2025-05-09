@interface AWETeenModeVideoTracker : NSObject
@property (nonatomic) NSString connectMethod;
@property (nonatomic) NSNumber fromSlideUp;
@property (nonatomic) BOOL usingPreloaded;
@property (nonatomic) UIViewController<AWETeenModeVideoTrackerDelegate> delegate;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWEVideoBSModel bsModel;
@property (nonatomic) q vcType;
@property (nonatomic) NSString referString;
@property (nonatomic) NSString albumEnterFrom;
@property (nonatomic) NSString albumEntranceSource;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isCDNURLExpired;
@property (nonatomic) NSNumber slideType;
@property (nonatomic) AWETeenExtraParamModel extraParam;
@property (nonatomic) NSDictionary firstFrameTimestamp;
@property (nonatomic) double playStartTimestamp;
@property (nonatomic) double playStartSystemVolumn;
@property (nonatomic) NSNumber calcBitrate;
@property (nonatomic) q trackerPlayerStatus;
@property (nonatomic) BOOL coverImageLoaded;
@property (nonatomic) q trategyType;
@property (nonatomic) q loopPlay;
@property (nonatomic) q stallAction;
@property (nonatomic) double stallStartTimestamp;
@property (nonatomic) Q totalStallCount;
@property (nonatomic) double totalStallTotalDuration;
@property (nonatomic) Q stallCount;
@property (nonatomic) double stallTotalDuration;
- (void)setStallCount:;
- (id)referString;
- (void)setReferString:;
- (BOOL)usingPreloaded;
- (void)setUsingPreloaded:;
- (id)fromSlideUp;
- (void)setFromSlideUp:;
- (id)getPlayModeWithAutoPlayMode;
- (double)playStartTimestamp;
- (id)slideType;
- (void)setSlideType:;
- (unsigned long long)stallCount;
- (long long)vcType;
- (BOOL)enableNNSR;
- (id)bsModel;
- (void)setBsModel:;
- (id)playerTypeString;
- (id)getBitrateGearNameSet;
- (void)setVcType:;
- (void)setPlayStartTimestamp:;
- (id)extraParam;
- (void)setExtraParam:;
- (BOOL)isCDNURLExpired;
- (void)setIsCDNURLExpired:;
- (long long)trategyType;
- (void)setTrategyType:;
- (id)playURIString;
- (void)setStallStartTimestamp:;
- (double)stallStartTimestamp;
- (double)stallTotalDuration;
- (void)setStallTotalDuration:;
- (void)setTotalStallTotalDuration:;
- (double)totalStallTotalDuration;
- (id)getVideoPlayAccess;
- (void)trackVideoPlayPause;
- (void)trackPlayTime;
- (void)trackVideoPlayFinish;
- (void)trackClickVideoPlay;
- (long long)loopPlay;
- (void)setStallAction:;
- (long long)stallAction;
- (id)albumEnterFrom;
- (void)setAlbumEnterFrom:;
- (long long)trackerPlayerStatus;
- (void)setTrackerPlayerStatus:;
- (void)setCoverImageLoaded:;
- (void)trackImageLoadWithError:;
- (void)updateVideoQualityExtraInfoWithFromSlideUp:usingPreloaded:;
- (void)trackVideoPlayEndWithPreloadSize:;
- (void)cancelTimingForStalling;
- (void)setLoopPlay:;
- (void)trackMoviePlayWithDuration:;
- (void)monitorVideoBitrateFirstFrameWithPlayer:duration:;
- (void)trackDirectFirstFrame:;
- (void)trackVideoPlayQualityWithPlayer:prepareDuration:duration:isFirstPlay:firstRealNetResponse:;
- (void)monitorMediaPlaySucceedWithPlayer:;
- (void)trackVideoPlayAction;
- (void)trackVideoPlayEndWithPlayer:playIndex:isFirst:;
- (void)trackVideoPlayFailedWithPlayer:forURL:error:;
- (void)trackVideoRequestResponseWithPlayer:error:duration:isSuccess:;
- (void)monitorMediaPlayFailedWithPlayer:error:;
- (void)trackVideoPlayFailedWithPlayer:error:;
- (void)trackVideoBlockIfNeededWithPlayer:;
- (void)trackVideoDataDownloadWithPlayer:forURL:;
- (void)trackNoNetwork;
- (void)trackVideoResume;
- (void)setPlayStartSystemVolumn:;
- (void)setCalcBitrate:;
- (void)trackVideoRequestWithPreloadSize:duration:isFirst:;
- (id)albumEntranceSource;
- (void)setAlbumEntranceSource:;
- (id)connectMethod;
- (void)setConnectMethod:;
- (id)p_searchResultParams;
- (double)playStartSystemVolumn;
- (void)p_blockMonitorSummary:;
- (id)__qualityTypeWithPlayer:;
- (id)playerNetworkTypeString;
- (id)isCurrentVideoH265;
- (void)p_trackVideoBlockWithPlayer:blockType:duration:endType:;
- (long long)errcodeNNSR;
- (id)calcBitrate;
- (BOOL)coverImageLoaded;
- (id)getVideoPlayQualityParams;
- (id)p_detailsWithFirstFrameLoadTime:;
- (id)p_detailsWithFirstImageLoadTime;
- (void)p_trackVideoBlockWithDuration:endType:;
- (id)p_monitorMediaPlayRateWithPlayer:;
- (void)p_trackVideoBlockWithPlayer:duration:endType:extraParams:;
- (void)p_clearDetailsWithFirstFrame;
- (void)setModel:;
- (id)actionType;
- (BOOL)isFullScreen;
- (id)init;
- (id)delegate;
- (id)model;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setIsLandscape:;
- (BOOL)isLandscape;
- (unsigned long long)totalStallCount;
- (void)setTotalStallCount:;
- (void)setIsFullScreen:;
- (id)videoSource;
- (id)firstFrameTimestamp;
- (void)setFirstFrameTimestamp:;
@end
