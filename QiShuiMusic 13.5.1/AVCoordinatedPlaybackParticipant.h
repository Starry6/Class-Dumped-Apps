@interface AVCoordinatedPlaybackParticipant : NSObject
@property (nonatomic) NSArray suspensionReasons;
@property (nonatomic) BOOL readyToPlay;
@property (nonatomic) NSUUID identifier;
- (void)dealloc;
- (id)identifier;
- (BOOL)isReadyToPlay;
- (unsigned long long)hash;
- (id)suspensionReasons;
- (BOOL)isEqual:;
- (id)initWithParticipantIdentifier:readyToPlay:suspensionReasons:;
@end
