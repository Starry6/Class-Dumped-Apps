@interface STMutableLocationStatusDomainData : STLocationStatusDomainData
@property (nonatomic) STMutableListData locationAttributionListData;
@property (nonatomic) NSArray attributions;
@property (nonatomic) Q activeDisplayModes;
@property (nonatomic) NSArray locationAttributions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addAttribution:;
- (void)setAttributions:;
- (void)removeAttribution:;
- (id)locationAttributionListData;
- (id)initWithLocationAttributionListData:activeDisplayModes:;
- (void)setActiveDisplayModes:;
- (BOOL)applyDiff:;
- (void)addLocationAttribution:;
- (void)setLocationAttributions:;
- (id)copyWithZone:;
- (void)removeLocationAttribution:;
@end
