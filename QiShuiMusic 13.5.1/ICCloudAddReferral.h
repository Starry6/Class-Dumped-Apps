@interface ICCloudAddReferral : NSObject
@property (nonatomic) NSString playlistGlobalID;
@property (nonatomic) q albumAdamID;
- (id)playlistGlobalID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (long long)albumAdamID;
+ (BOOL)supportsSecureCoding;
+ (id)referralWithAlbumAdamID:;
+ (id)referralWithPlaylistGlobalID:;
@end
