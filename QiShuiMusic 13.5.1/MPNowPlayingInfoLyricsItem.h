@interface MPNowPlayingInfoLyricsItem : NSObject
@property (nonatomic) ^v mediaRemoteLyricsItem;
@property (nonatomic) MPNowPlayingInfoLyricsItemToken token;
@property (nonatomic) NSString lyrics;
@property (nonatomic) BOOL userProvided;
- (void)dealloc;
- (id)token;
- (id)lyrics;
- (BOOL)userProvided;
- (id)initWithLyrics:userProvided:;
- (id)initWithLyrics:userProvided:token:;
- (id)initWithMediaRemoteLyricsItem:;
- (id)mediaRemoteLyricsItem;
@end
