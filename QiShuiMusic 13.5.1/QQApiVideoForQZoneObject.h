@interface QQApiVideoForQZoneObject : QQApiObject
@property (nonatomic) NSString assetURL;
@property (nonatomic) NSDictionary extMap;
@property (nonatomic) NSData videoData;
- (id)initWithVideoData:title:extMap:;
- (id)extMap;
- (id)initWithAssetURL:title:extMap:;
- (void)setExtMap:;
- (void)setVideoData:;
- (id)videoData;
- (id)assetURL;
- (void)setAssetURL:;
+ (id)objectWithAssetURL:title:extMap:;
+ (id)objectWithVideoData:title:extMap:;
@end
