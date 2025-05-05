@interface DNDMutableClientEventDetails : DNDClientEventDetails
@property (nonatomic) BOOL notifyAnyway;
@property (nonatomic) Q behavior;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) Q type;
@property (nonatomic) Q urgency;
@property (nonatomic) DNDContactHandle sender;
@property (nonatomic) NSString threadIdentifier;
@property (nonatomic) NSString filterCriteria;
@property (nonatomic) BOOL shouldAlwaysInterrupt;
- (void)setThreadIdentifier:;
- (void)setFilterCriteria:;
- (void)setType:;
- (void)setBehavior:;
- (void)setBundleIdentifier:;
- (void)setUrgency:;
- (void)setShouldAlwaysInterrupt:;
- (void)setNotifyAnyway:;
- (void)setSender:;
- (void)setIdentifier:;
- (id)copyWithZone:;
@end
