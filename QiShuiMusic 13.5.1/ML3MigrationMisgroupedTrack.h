@interface ML3MigrationMisgroupedTrack : NSObject
@property (nonatomic) q persistentID;
@property (nonatomic) q albumArtistPID;
- (long long)persistentID;
- (id)initWithPersistentID:albumArtistPID:;
- (long long)albumArtistPID;
@end
