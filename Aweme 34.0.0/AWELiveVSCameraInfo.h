@interface AWELiveVSCameraInfo : AWEBaseApiModel
@property (nonatomic) q cameraId;
@property (nonatomic) NSString cameraIdStr;
@property (nonatomic) NSNumber style;
@property (nonatomic) AWELiveStreamURLModel streamInfo;
@property (nonatomic) NSString matchId;
@property (nonatomic) BOOL isSubCamera;
@property (nonatomic) NSString title;
@property (nonatomic) AWEURLModel cover;
@property (nonatomic) AWELiveCameraPaidInfo cameraPaidInfo;
- (long long)cameraId;
- (id)cover;
- (void)setCover:;
- (void)setCameraId:;
- (id)matchId;
- (BOOL)isSubCamera;
- (id)cameraIdStr;
- (void)setMatchId:;
- (void)setIsSubCamera:;
- (void)setCameraIdStr:;
- (id)streamInfo;
- (id)cameraPaidInfo;
- (void)setStreamInfo:;
- (void)setCameraPaidInfo:;
- (id)style;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setStyle:;
- (id)toJsonString;
+ (id)coverURLJSONTransformer;
+ (id)streamInfoJSONTransformer;
+ (id)cameraPaidInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
