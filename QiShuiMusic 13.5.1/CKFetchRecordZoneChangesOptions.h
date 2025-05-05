@interface CKFetchRecordZoneChangesOptions : NSObject
@property (nonatomic) BOOL fetchNewestChangesFirst;
@property (nonatomic) BOOL fetchChangesMadeByThisDevice;
@property (nonatomic) CKServerChangeToken previousServerChangeToken;
@property (nonatomic) Q resultsLimit;
@property (nonatomic) NSArray desiredKeys;
- (void)setResultsLimit:;
- (void)setPreviousServerChangeToken:;
- (id)previousServerChangeToken;
- (void)setDesiredKeys:;
- (id)init;
- (BOOL)fetchNewestChangesFirst;
- (unsigned long long)resultsLimit;
- (id)desiredKeys;
- (void)setFetchChangesMadeByThisDevice:;
- (id)initWithCoder:;
- (void)setFetchNewestChangesFirst:;
- (void)encodeWithCoder:;
- (BOOL)fetchChangesMadeByThisDevice;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithZoneConfiguration:;
- (id)zoneConfiguration;
+ (BOOL)supportsSecureCoding;
@end
