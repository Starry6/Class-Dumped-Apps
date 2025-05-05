@interface MPStoreFileAssetInfo : NSObject
@property (nonatomic) NSURL assetURL;
@property (nonatomic) NSString downloadKey;
@property (nonatomic) NSArray fairPlayInfoList;
@property (nonatomic) q flavorType;
@property (nonatomic) NSString fileExtension;
@property (nonatomic) Q fileSize;
@property (nonatomic) NSData md5;
@property (nonatomic) q protectionType;
@property (nonatomic) NSString playbackAuthorizationToken;
- (unsigned long long)fileSize;
- (id)assetURL;
- (long long)protectionType;
- (id)playbackAuthorizationToken;
- (void).cxx_destruct;
- (id)md5;
- (id)fileExtension;
- (id)initWithiTunesCloudStoreFileAssetInfo:;
- (id)downloadKey;
- (id)fairPlayInfoList;
- (long long)flavorType;
@end
