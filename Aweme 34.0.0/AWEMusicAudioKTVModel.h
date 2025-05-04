@interface AWEMusicAudioKTVModel : MTLModel
@property (nonatomic) NSNumber roomID;
@property (nonatomic) q totalUserCount;
@property (nonatomic) q scene;
@property (nonatomic) AWEURLModel backgroudImage;
@property (nonatomic) AWEMusicAudioKTVSingerModel singer;
@property (nonatomic) NSString extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (long long)totalUserCount;
- (void)setTotalUserCount:;
- (id)backgroudImage;
- (void)setBackgroudImage:;
- (id)singer;
- (void)setSinger:;
- (void)setScene:;
- (id)roomID;
- (long long)scene;
- (id)extra;
- (void).cxx_destruct;
- (void)setRoomID:;
+ (id)backgroudImageJSONTransformer;
+ (id)singerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
