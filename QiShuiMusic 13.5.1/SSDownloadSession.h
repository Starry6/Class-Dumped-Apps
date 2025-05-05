@interface SSDownloadSession : NSObject
@property (nonatomic) SSDownload download;
@property (nonatomic) SSDownloadAsset downloadAsset;
- (id)download;
- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (id)_initSSDownloadSession;
- (id)_initWithMessage:controlConnection:;
- (id)downloadAsset;
- (id)_copySessionPropertyWithKey:;
@end
