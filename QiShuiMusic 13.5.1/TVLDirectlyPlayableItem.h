@interface TVLDirectlyPlayableItem : TVLPlayerItemInternal
- (id)URLWithPreferences:;
- (void)fallbackPreferences:;
- (BOOL)fallbackWithoutSetResolution;
- (id)initWithPlayableURLs:;
- (id)supportedPreferences;
- (void)setPreferences:;
- (id)preferences;
- (id)URI;
- (void).cxx_destruct;
- (id)currentURL;
@end
