@interface MPNowPlayingInfoAudioRoute : NSObject
@property (nonatomic) MRContentItemMetadataAudioRoute mediaRemoteAudioRoute;
@property (nonatomic) q type;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL supportsSpatialization;
@property (nonatomic) BOOL spatializationEnabled;
- (void)setName:;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
- (id)name;
- (void)setSupportsSpatialization:;
- (void)setSpatializationEnabled:;
- (BOOL)supportsSpatialization;
- (BOOL)isSpatializationEnabled;
- (id)initWithMediaRemoteAudioRoute:;
- (id)mediaRemoteAudioRoute;
@end
