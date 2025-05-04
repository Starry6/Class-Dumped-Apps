@interface AWESingleStickerDownloadInfo : NSObject
@property (nonatomic) NSString effectIdentifier;
@property (nonatomic) NSString effectName;
@property (nonatomic) NSArray fileDownloadURLs;
@property (nonatomic) NSString stickerUrl;
@property (nonatomic) q duration;
@property (nonatomic) AWESingleStickerDownloadResult result;
- (id)effectName;
- (void)setEffectName:;
- (id)fileDownloadURLs;
- (void)setFileDownloadURLs:;
- (id)stickerUrl;
- (void)setStickerUrl:;
- (void)setResult:;
- (void)setDuration:;
- (void).cxx_destruct;
- (long long)duration;
- (id)result;
- (id)effectIdentifier;
- (void)setEffectIdentifier:;
@end
