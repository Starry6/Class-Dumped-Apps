@interface HSPlayStatusUpdateResponse : HSResponse
@property (nonatomic) I nextRevisionID;
@property (nonatomic) Q nowPlayingContainerID;
@property (nonatomic) Q nowPlayingContainerItemID;
@property (nonatomic) Q nowPlayingDatabaseID;
@property (nonatomic) Q nowPlayingItemID;
@property (nonatomic) NSDictionary playStatusInformation;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)nextRevisionID;
- (void)setNextRevisionID:;
- (unsigned long long)nowPlayingContainerID;
- (void)setNowPlayingContainerID:;
- (unsigned long long)nowPlayingContainerItemID;
- (void)setNowPlayingContainerItemID:;
- (unsigned long long)nowPlayingDatabaseID;
- (void)setNowPlayingDatabaseID:;
- (unsigned long long)nowPlayingItemID;
- (void)setNowPlayingItemID:;
- (id)playStatusInformation;
- (void)setPlayStatusInformation:;
@end
