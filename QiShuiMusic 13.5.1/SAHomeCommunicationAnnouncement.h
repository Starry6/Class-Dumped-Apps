@interface SAHomeCommunicationAnnouncement : SADomainObject
@property (nonatomic) NSDate datePlaybackFinished;
@property (nonatomic) NSDate datePlaybackStarted;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)datePlaybackFinished;
- (void)setDatePlaybackFinished:;
- (id)datePlaybackStarted;
- (void)setDatePlaybackStarted:;
@end
