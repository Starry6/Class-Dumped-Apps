@interface FTServiceStatus : NSObject
@property (nonatomic) NSInteger supportedServicesToken;
@property (nonatomic) Q supportedServicesFlags;
@property (nonatomic) BOOL blockPost;
@property (nonatomic) BOOL iMessageSupported;
@property (nonatomic) BOOL faceTimeAudioSupported;
@property (nonatomic) BOOL faceTimeMultiwaySupported;
- (void)_reload;
- (void)_removeObservers;
- (void)dealloc;
- (void)_addObservers;
- (id)initPrivate;
- (void)setSupportedServicesFlags:;
- (void)setBlockPost:;
- (BOOL)iMessageSupported;
- (int)supportedServicesToken;
- (unsigned long long)supportedServicesFlags;
- (BOOL)faceTimeAudioSupported;
- (void)setSupportedServicesToken:;
- (BOOL)faceTimeMultiwaySupported;
- (unsigned long long)_noCache_supportedServicesFlags;
- (BOOL)blockPost;
+ (id)sharedInstance;
@end
