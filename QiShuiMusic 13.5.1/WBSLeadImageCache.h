@interface WBSLeadImageCache : NSObject
@property (nonatomic) NSURL imageDirectoryURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <WBSSiteMetadataProviderDelegate> providerDelegate;
@property (nonatomic) BOOL providesFavicons;
- (BOOL)canHandleRequest:;
- (void)savePendingChangesBeforeTermination;
- (void).cxx_destruct;
- (id)imageForURL:;
- (id)responseForRequest:willProvideUpdates:;
- (void)prepareResponseForRequest:allowDelayedResponse:;
- (id)providerDelegate;
- (void)setProviderDelegate:;
- (void)stopWatchingUpdatesForRequest:;
- (void)emptyCaches;
- (void)purgeUnneededCacheEntries;
- (id)initWithImageDirectoryURL:;
- (void)_addRequest:;
- (void)siteMetadataImageCache:didFinishLoadingImage:forKeyString:;
- (void)siteMetadataImageCacheDidEmptyCache:;
- (id)imageDirectoryURL;
- (void)saveImage:forURL:completionHandler:;
@end
