@interface SSDownloadManagerOptions : NSObject
@property (nonatomic) NSArray prefetchedDownloadExternalProperties;
@property (nonatomic) BOOL ignoreDivertedDownloads;
@property (nonatomic) NSArray downloadKinds;
@property (nonatomic) NSString persistenceIdentifier;
@property (nonatomic) NSArray prefetchedDownloadProperties;
@property (nonatomic) BOOL shouldFilterExternalOriginatedDownloads;
- (id)persistenceIdentifier;
- (id)prefetchedDownloadExternalProperties;
- (unsigned long long)hash;
- (void)setDownloadKinds:;
- (id)prefetchedDownloadProperties;
- (BOOL)shouldFilterExternalOriginatedDownloads;
- (void)setPersistenceIdentifier:;
- (void).cxx_destruct;
- (void)setPrefetchedDownloadExternalProperties:;
- (void)setIgnoreDivertedDownloads:;
- (BOOL)ignoreDivertedDownloads;
- (void)setPrefetchedDownloadProperties:;
- (BOOL)isEqual:;
- (id)downloadKinds;
- (void)setShouldFilterExternalOriginatedDownloads:;
- (id)copyWithZone:;
@end
