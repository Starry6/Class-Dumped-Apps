@interface WBNewVideoObject : NSObject
@property (nonatomic) NSString finalAsset;
@property (nonatomic) NSString videoPath;
@property (nonatomic) NSURL videoData;
@property (nonatomic) NSString videoFormat;
@property (nonatomic) BOOL isShareToStory;
@property (nonatomic) <WBMediaTransferProtocol> delegate;
- (void)addVideo:;
- (id)finalAsset;
- (BOOL)isShareToStory;
- (void)setFinalAsset:;
- (void)setIsShareToStory:;
- (void)setVideoData:;
- (id)videoData;
- (id)validate;
- (id)videoFormat;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)videoPath;
- (void)setVideoPath:;
- (void)setVideoFormat:;
+ (id)dictionaryWithVideoObject:;
+ (id)videoObjectWithDictionary:;
+ (id)object;
@end
