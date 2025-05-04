@interface AWEIMAvatarProps : NSObject
@property (nonatomic) NSArray urlList;
@property (nonatomic) double ratio;
@property (nonatomic) <AWEIMImageProtocol> keyProvider;
@property (nonatomic) AWEIMImageTrackerConfig trackConfig;
@property (nonatomic) UIImage placeholderImage;
- (id)trackConfig;
- (void)setKeyProvider:;
- (void)setTrackConfig:;
- (id)placeholderImage;
- (void)setPlaceholderImage:;
- (void).cxx_destruct;
- (double)ratio;
- (void)setRatio:;
- (id)urlList;
- (void)setUrlList:;
- (id)keyProvider;
@end
