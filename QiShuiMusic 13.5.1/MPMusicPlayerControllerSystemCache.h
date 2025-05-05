@interface MPMusicPlayerControllerSystemCache : NSObject
@property (nonatomic) MPMusicPlayerControllerNowPlaying nowPlaying;
@property (nonatomic) MPMusicPlayerQueueDescriptor queueDescriptor;
@property (nonatomic) BOOL hasCachedData;
- (void)clearCache;
- (void)setNowPlaying:;
- (void)setQueueDescriptor:;
- (BOOL)_saveObject:forKey:error:;
- (id)nowPlaying;
- (void).cxx_destruct;
- (id)queueDescriptor;
- (id)_init;
- (id)_objectOfClass:forKey:error:;
- (BOOL)hasCachedData;
+ (id)sharedCache;
@end
