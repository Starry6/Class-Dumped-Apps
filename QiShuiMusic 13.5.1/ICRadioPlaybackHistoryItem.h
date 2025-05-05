@interface ICRadioPlaybackHistoryItem : NSObject
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) BOOL expired;
@property (nonatomic) NSNumber pauseTime;
@property (nonatomic) NSDictionary serverTrackInfo;
@property (nonatomic) NSDate skipDate;
@property (nonatomic) q storeIdentifier;
@property (nonatomic) NSMutableDictionary propertyListRepresentation;
- (long long)storeIdentifier;
- (id)pauseTime;
- (BOOL)isExpired;
- (id)propertyListRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)expirationDate;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithTrack:;
- (id)serverTrackInfo;
- (id)skipDate;
+ (BOOL)supportsSecureCoding;
@end
