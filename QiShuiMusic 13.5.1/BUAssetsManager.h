@interface BUAssetsManager : NSObject
@property (nonatomic) NSMutableDictionary pathDict;
@property (nonatomic) NSDictionary contents;
- (id)basePathForKey:;
- (long long)checkFileReady:file:;
- (void)fetchImageName:completion:;
- (void)fetchJson;
- (id)pathDict;
- (void)setPathDict:;
- (id)imageNamed:;
- (id)contents;
- (void)setContents:;
- (void)setup;
- (void).cxx_destruct;
- (void)fetchImage;
- (void)fetchAssets;
+ (id)sharedInstance;
@end
