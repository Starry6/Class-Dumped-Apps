@interface IDSCKFetchRecordZoneChangesOptions : NSObject
@property (nonatomic) IDSCKServerChangeToken previousServerChangeToken;
@property (nonatomic) Q resultsLimit;
@property (nonatomic) NSArray desiredKeys;
- (void)setResultsLimit:;
- (void)setPreviousServerChangeToken:;
- (id)previousServerChangeToken;
- (void)setDesiredKeys:;
- (unsigned long long)resultsLimit;
- (id)desiredKeys;
- (void).cxx_destruct;
+ (id)alloc;
+ (Class)__class;
@end
