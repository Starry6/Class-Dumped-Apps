@interface ML3MigrationMisgroupedAlbum : NSObject
@property (nonatomic) q albumPID;
@property (nonatomic) q albumArtistPID;
@property (nonatomic) NSArray misgroupedTracks;
- (void).cxx_destruct;
- (long long)albumArtistPID;
- (id)initWithAlbumPID:albumArtistPID:;
- (void)addMisgroupedTrack:;
- (id)misgroupedTracks;
- (long long)albumPID;
@end
