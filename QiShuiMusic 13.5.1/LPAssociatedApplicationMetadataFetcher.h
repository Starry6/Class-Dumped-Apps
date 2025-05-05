@interface LPAssociatedApplicationMetadataFetcher : LPFetcher
@property (nonatomic) NSURL URL;
@property (nonatomic) NSString bundleIdentifier;
- (void)cancel;
- (id)bundleIdentifier;
- (void)setBundleIdentifier:;
- (void).cxx_destruct;
- (void)setURL:;
- (id)URL;
- (void)fetchWithConfiguration:completionHandler:;
- (void)_failedWithErrorCode:underlyingError:;
- (void)_completedWithClipMetadata:iconURL:error:;
@end
