@interface SAMPPlaybackInfo : AceObject
@property (nonatomic) q durationMillis;
@property (nonatomic) SACalendar lastPlayedDate;
@property (nonatomic) q playbackPositionMillis;
@property (nonatomic) q plays;
@property (nonatomic) BOOL rememberPlaybackPosition;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)lastPlayedDate;
- (void)setLastPlayedDate:;
- (void)setDurationMillis:;
- (void)setPlaybackPositionMillis:;
- (void)setPlays:;
- (long long)durationMillis;
- (long long)playbackPositionMillis;
- (long long)plays;
- (BOOL)rememberPlaybackPosition;
- (void)setRememberPlaybackPosition:;
+ (id)playbackInfo;
+ (id)playbackInfoWithDictionary:context:;
@end
