@interface MPModelPlaybackPosition : MPModelObject
@property (nonatomic) double bookmarkTime;
@property (nonatomic) BOOL shouldRememberBookmarkTime;
@property (nonatomic) BOOL hasBeenPlayed;
@property (nonatomic) double startTime;
@property (nonatomic) NSNumber stopTime;
@property (nonatomic) NSString storeUbiquitousIdentifier;
@property (nonatomic) q userPlayCount;
+ (id)__startTime_KEY;
+ (id)__bookmarkTime_KEY;
+ (id)__shouldRememberBookmarkTime_KEY;
+ (id)__hasBeenPlayed_KEY;
+ (id)__stopTime_KEY;
+ (id)__storeUbiquitousIdentifier_KEY;
+ (id)__userPlayCount_KEY;
@end
