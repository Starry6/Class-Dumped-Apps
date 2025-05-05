@interface AVDelegatingPlaybackCoordinatorPlaybackControlCommand : NSObject
@property (nonatomic) AVCoordinatedPlaybackParticipant originator;
@property (nonatomic) NSString expectedCurrentItemIdentifier;
- (id)initInternal;
- (id)init;
- (id)originator;
- (id)expectedCurrentItemIdentifier;
@end
