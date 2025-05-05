@interface KVPodcastItemBuilder : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)playlistItemWithName:itemId:error:;
- (id)podcastItemWithTitle:itemId:artistName:error:;
- (id)_buildItemWithError:;
@end
