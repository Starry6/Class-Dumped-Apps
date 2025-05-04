@interface AWEPCTResourceInfo : MTLModel
@property (nonatomic) q fileType;
@property (nonatomic) PHAsset inputPHAsset;
@property (nonatomic) NSString remoteUrl;
@property (nonatomic) NSString localPath;
@property (nonatomic) NSString cacheKey;
- (void)setInputPHAsset:;
- (id)inputPHAsset;
- (void)setRemoteUrl:;
- (id)remoteUrl;
- (id)cacheKey;
- (long long)fileType;
- (void)setFileType:;
- (void).cxx_destruct;
- (void)setCacheKey:;
- (id)localPath;
- (void)setLocalPath:;
@end
