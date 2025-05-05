@interface ML3AlbumGroupingIdentifier : NSObject
@property (nonatomic) q albumArtistPersistentID;
@property (nonatomic) NSData groupingKey;
@property (nonatomic) NSString feedURL;
@property (nonatomic) q seasonNumber;
@property (nonatomic) BOOL compilation;
@property (nonatomic) NSData keyValue;
- (long long)seasonNumber;
- (unsigned long long)hash;
- (id)keyValue;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)albumArtistPersistentID;
- (BOOL)compilation;
- (id)feedURL;
- (id)initWithAlbumArtistPersistentID:groupingKey:feedURL:seasonNumber:compilation:;
- (id)groupingKey;
@end
