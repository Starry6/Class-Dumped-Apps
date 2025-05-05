@interface MPLocalMediaQueryRemotePlaybackQueue : MPRemotePlaybackQueue
@property (nonatomic) MPMediaQuery mediaQuery;
@property (nonatomic) MPMediaItem firstItem;
@property (nonatomic) q shuffleType;
@property (nonatomic) q repeatType;
- (long long)repeatType;
- (void).cxx_destruct;
- (id)firstItem;
- (id)description;
- (BOOL)verifyWithError:;
- (long long)shuffleType;
- (id)initWithMediaRemotePlaybackQueue:options:;
- (id)mediaQuery;
+ (BOOL)supportsSecureCoding;
@end
