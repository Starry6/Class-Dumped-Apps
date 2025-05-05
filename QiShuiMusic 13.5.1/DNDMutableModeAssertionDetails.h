@interface DNDMutableModeAssertionDetails : DNDModeAssertionDetails
@property (nonatomic) NSDate userVisibleEndDate;
@property (nonatomic) NSDate modeConfigurationModifiedDate;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString modeIdentifier;
@property (nonatomic) DNDModeAssertionLifetime lifetime;
@property (nonatomic) Q reason;
- (void)setReason:;
- (void)setIdentifier:;
- (void)setModeIdentifier:;
- (id)copyWithZone:;
- (void)setLifetime:;
- (void)setModeConfigurationModifiedDate:;
- (void)setUserVisibleEndDate:;
@end
