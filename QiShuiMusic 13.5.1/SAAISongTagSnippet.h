@interface SAAISongTagSnippet : SAUISnippet
@property (nonatomic) SAUIAppPunchOut attributionPunchOut;
@property (nonatomic) SAMPPlaybackButton playbackButton;
@property (nonatomic) SAUIAppPunchOut purchaseSongPunchOut;
@property (nonatomic) SAUIAppPunchOut songDetailsPunchOut;
@property (nonatomic) SAAISongTag songTag;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)attributionPunchOut;
- (void)setAttributionPunchOut:;
- (id)playbackButton;
- (void)setPlaybackButton:;
- (id)purchaseSongPunchOut;
- (void)setPurchaseSongPunchOut:;
- (id)songDetailsPunchOut;
- (void)setSongDetailsPunchOut:;
- (id)songTag;
- (void)setSongTag:;
+ (id)songTagSnippet;
+ (id)songTagSnippetWithDictionary:context:;
@end
