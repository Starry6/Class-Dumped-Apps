@interface SSMetricsSearchEvent : SSMetricsBaseEvent
@property (nonatomic) NSString searchTerm;
@property (nonatomic) NSString actionType;
@property (nonatomic) @ actionDetails;
@property (nonatomic) NSString targetIdentifier;
@property (nonatomic) NSString targetType;
@property (nonatomic) NSString targetURL;
- (id)init;
- (id)targetIdentifier;
- (id)actionType;
- (void)setActionType:;
- (void)setSearchTerm:;
- (void)setTargetIdentifier:;
- (void)setActionDetails:;
- (id)targetType;
- (id)searchTerm;
- (void)setTargetType:;
- (id)actionDetails;
- (id)targetURL;
- (void)setLocationWithEventLocations:;
- (void)setTargetURL:;
@end
