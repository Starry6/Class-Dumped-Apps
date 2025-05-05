@interface STMutableAirPlayStatusDomainData : STAirPlayStatusDomainData
@property (nonatomic) Q airPlayState;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBundleIdentifier:;
- (BOOL)applyDiff:;
- (void)setAirPlayState:;
- (id)copyWithZone:;
@end
