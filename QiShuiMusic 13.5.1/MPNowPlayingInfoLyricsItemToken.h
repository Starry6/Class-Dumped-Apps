@interface MPNowPlayingInfoLyricsItemToken : NSObject
@property (nonatomic) ^v mediaRemoteLyricsItemToken;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSDictionary userInfo;
- (void)dealloc;
- (id)userInfo;
- (id)identifier;
- (id)initWithIdentifier:userInfo:;
- (id)initWithMediaRemoteLyricsItemToken:;
- (id)mediaRemoteLyricsItemToken;
@end
