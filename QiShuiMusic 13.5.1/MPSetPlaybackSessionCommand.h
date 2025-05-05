@interface MPSetPlaybackSessionCommand : MPRemoteCommand
@property (nonatomic) NSString currentPlaybackSessionIdentifier;
@property (nonatomic) NSString currentPlaybackSessionRevision;
@property (nonatomic) NSArray exportableSessionTypes;
@property (nonatomic) NSArray supportedSessionTypes;
- (void)setCurrentPlaybackSessionRevision:;
- (id)_mediaRemoteCommandInfoOptions;
- (id)supportedSessionTypes;
- (id)exportableSessionTypes;
- (id)currentPlaybackSessionIdentifier;
- (void).cxx_destruct;
- (void)setExportableSessionTypes:;
- (void)setCurrentPlaybackSessionIdentifier:;
- (void)setSupportedSessionTypes:;
- (id)currentPlaybackSessionRevision;
@end
