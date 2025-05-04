@interface AWEImageAlbumMusicInfoModel : MTLModel
@property (nonatomic) q beginTime;
@property (nonatomic) q endTime;
@property (nonatomic) q volume;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)volume;
- (long long)endTime;
- (void)setVolume:;
- (void)setEndTime:;
- (long long)beginTime;
- (void)setBeginTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
