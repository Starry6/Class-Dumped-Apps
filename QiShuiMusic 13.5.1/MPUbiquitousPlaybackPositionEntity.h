@interface MPUbiquitousPlaybackPositionEntity : NSObject
@property (nonatomic) NSString ubiquitousIdentifier;
@property (nonatomic) double bookmarkTimestamp;
@property (nonatomic) double bookmarkTime;
@property (nonatomic) Q userPlayCount;
@property (nonatomic) BOOL hasBeenPlayed;
- (id)init;
- (void).cxx_destruct;
- (double)bookmarkTime;
- (BOOL)hasBeenPlayed;
- (void)setHasBeenPlayed:;
- (id)initWithUbiquitousIdentifier:;
- (void)setBookmarkTimestamp:;
- (void)setBookmarkTime:;
- (void)setUserPlayCount:;
- (BOOL)hasBeenPlayedModified;
- (BOOL)userPlayCountModified;
- (BOOL)bookmarkTimeModified;
- (BOOL)bookmarkTimestampModified;
- (id)ubiquitousIdentifier;
- (double)bookmarkTimestamp;
- (unsigned long long)userPlayCount;
+ (id)ubiquitousIdentifierWithStoreAdamID:;
@end
