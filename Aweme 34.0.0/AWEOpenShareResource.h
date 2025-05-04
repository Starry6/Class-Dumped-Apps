@interface AWEOpenShareResource : NSObject
@property (nonatomic) Q resourceFromType;
@property (nonatomic) Q resourceMediaType;
@property (nonatomic) BOOL shouldWebResourceDownload;
@property (nonatomic) BOOL isWebResourceDownloaded;
@property (nonatomic) NSString webSourceURL;
@property (nonatomic) NSString localSourceURL;
- (unsigned long long)resourceFromType;
- (void)setResourceFromType:;
- (unsigned long long)resourceMediaType;
- (void)setResourceMediaType:;
- (BOOL)shouldWebResourceDownload;
- (void)setShouldWebResourceDownload:;
- (BOOL)isWebResourceDownloaded;
- (void)setIsWebResourceDownloaded:;
- (id)webSourceURL;
- (void)setWebSourceURL:;
- (id)localSourceURL;
- (void)setLocalSourceURL:;
- (void).cxx_destruct;
@end
