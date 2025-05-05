@interface BDXBridgeDownloadFileParam : NSObject
@property (nonatomic) NSString urlString;
@property (nonatomic) NSDictionary headers;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSString filePath;
@property (nonatomic) NSString saveToAlbum;
- (void)setSaveToAlbum:;
- (id)saveToAlbum;
- (id)filePath;
- (id)urlString;
- (void)setFilePath:;
- (void)setHeaders:;
- (void).cxx_destruct;
- (void)setUrlString:;
- (id)headers;
- (id)params;
- (void)setParams:;
@end
