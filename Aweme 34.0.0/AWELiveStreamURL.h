@interface AWELiveStreamURL : AWEBaseApiModel
@property (nonatomic) NSString streamData;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString rtmpURL;
@property (nonatomic) AWELiveStreamExtraInfoModel extra;
- (void)setExtra:;
- (void)setRtmpURL:;
- (void)setStreamData:;
- (id)rtmpURL;
- (void)setIdentifier:;
- (id)extra;
- (id)identifier;
- (void).cxx_destruct;
- (id)streamData;
+ (id)JSONKeyPathsByPropertyKey;
@end
