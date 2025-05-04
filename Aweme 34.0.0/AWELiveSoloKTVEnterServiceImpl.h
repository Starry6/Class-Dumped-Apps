@interface AWELiveSoloKTVEnterServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addListener;
- (void)rtvServiceWillBegin:;
- (void)rtvServiceDidBegin:;
- (void)rtvServiceWillFinish:;
- (void)rtvServiceDidFinish:;
- (BOOL)enableEnterSoloKTV;
- (void)removeListener;
- (void)muteLiveVolumeIfNeed:;
- (void)showLoginView;
- (void)showAlbumVC:completion:;
@end
