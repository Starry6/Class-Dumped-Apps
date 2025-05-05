@interface MPPlaybackContextRemotePlaybackQueue : MPRemotePlaybackQueue
- (id)siriAssetInfo;
- (void).cxx_destruct;
- (id)description;
- (void)getPlaybackContextWithCompletion:;
- (long long)replaceIntent;
- (void)setReplaceIntent:;
- (id)siriWHAMetricsInfo;
- (BOOL)isRequestingImmediatePlayback;
- (id)siriRecommendationIdentifier;
- (id)initWithPlaybackContext:;
@end
