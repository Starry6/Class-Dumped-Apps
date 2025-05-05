@interface IESMLMgr : NSObject
@property (nonatomic) <IESMLProtocol> delegate;
- (void)clearAllCachedResource;
- (void)innerSetupWithURL:completion:isLocalResource:;
- (void)prepareForSR;
- (void)reportDownloadState:;
- (void)setupWithLocalURL:completion:;
- (void)setupWithURL:completion:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
