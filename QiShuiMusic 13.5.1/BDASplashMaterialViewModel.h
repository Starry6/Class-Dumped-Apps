@interface BDASplashMaterialViewModel : NSObject
@property (nonatomic) NSString splashID;
@property (nonatomic) Q materialType;
@property (nonatomic) BDASplashImageInfoModel imageModel;
@property (nonatomic) BDASplashVideoInfoModel videoModel;
@property (nonatomic) NSDictionary moduleInfo;
@property (nonatomic) NSDictionary hotSplashFilterInfo;
@property (nonatomic) BOOL isRemoteVideo;
@property (nonatomic) BOOL repeats;
@property (nonatomic) double displayTime;
@property (nonatomic) q themeStyle;
@property (nonatomic) NSString displayDensity;
@property (nonatomic) NSArray showTrackURLs;
@property (nonatomic) NSArray playTrackURLs;
@property (nonatomic) NSArray playOverTrackURLs;
@property (nonatomic) BOOL useRealTime;
@property (nonatomic) NSString realTimeLogExtra;
@property (nonatomic) q resourceLoadType;
@property (nonatomic) q modelType;
@property (nonatomic) NSNumber showExpected;
- (void)setUseRealTime:;
- (id)displayDensity;
- (id)hotSplashFilterInfo;
- (id)imageModel;
- (id)initWithSplashModel:;
- (BOOL)isGif;
- (BOOL)isRemoteVideo;
- (id)playOverTrackURLs;
- (id)playTrackURLs;
- (id)realTimeLogExtra;
- (long long)resourceLoadType;
- (void)setDisplayDensity:;
- (void)setHotSplashFilterInfo:;
- (void)setImageModel:;
- (void)setIsRemoteVideo:;
- (void)setPlayOverTrackURLs:;
- (void)setPlayTrackURLs:;
- (void)setRealTimeLogExtra:;
- (void)setResourceLoadType:;
- (void)setShowExpected:;
- (void)setShowTrackURLs:;
- (void)setSplashID:;
- (void)setThemeStyle:;
- (void)setVideoModel:;
- (id)showExpected;
- (id)showTrackURLs;
- (id)splashID;
- (BOOL)useRealTime;
- (id)videoModel;
- (long long)modelType;
- (void)setModelType:;
- (BOOL)isVideo;
- (void)setRepeats:;
- (BOOL)repeats;
- (void)setModuleInfo:;
- (id)moduleInfo;
- (void).cxx_destruct;
- (unsigned long long)materialType;
- (long long)themeStyle;
- (void)setMaterialType:;
- (double)displayTime;
- (void)setDisplayTime:;
@end
