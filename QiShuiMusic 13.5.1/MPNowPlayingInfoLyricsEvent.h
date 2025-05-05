@interface MPNowPlayingInfoLyricsEvent : NSObject
@property (nonatomic) ^v mediaRemoteLyricsEvent;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) MPNowPlayingInfoLyricsItemToken token;
- (id)startDate;
- (void)dealloc;
- (id)token;
- (id)endDate;
- (id)initWithMediaRemoteLyricsEvent:;
- (id)mediaRemoteLyricsEvent;
@end
