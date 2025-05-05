@interface KVMediaItemBuilder : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)albumArtistItemWithName:itemId:;
- (id)albumItemWithName:itemId:albumArtistId:;
- (id)genreItemWithName:itemId:;
- (id)songArtistItemWithName:itemId:;
- (id)songItemWithName:itemId:albumArtistId:songArtistId:albumId:genreId:;
- (id)playlistItemWithName:itemId:;
- (id)tvEpisodeItemWithName:itemId:showId:;
- (id)movieItemWithName:itemId:;
- (id)tvShowItemWithName:itemId:;
- (id)audioBookArtistItemWithName:itemId:;
- (id)audioBookItemWithName:itemId:artistId:;
- (id)musicVideoItemWithName:itemId:albumArtistId:songArtistId:albumId:genreId:;
- (id)_buildMediaItemWithId:otherFields:;
@end
