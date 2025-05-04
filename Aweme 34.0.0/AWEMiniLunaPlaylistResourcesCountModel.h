@interface AWEMiniLunaPlaylistResourcesCountModel : AWEBaseApiModel
@property (nonatomic) q ugcVideoCount;
@property (nonatomic) q trackCount;
@property (nonatomic) q mvCount;
- (long long)ugcVideoCount;
- (void)setUgcVideoCount:;
- (long long)mvCount;
- (void)setMvCount:;
- (long long)trackCount;
- (void)setTrackCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
