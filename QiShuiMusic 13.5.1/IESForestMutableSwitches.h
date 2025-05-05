@interface IESForestMutableSwitches : IESForestSwitches
@property (nonatomic) NSNumber enableStreamLoad;
@property (nonatomic) NSNumber enableHttpHeader;
@property (nonatomic) NSNumber enableLooseLimit;
@property (nonatomic) NSNumber enableFixCORS;
- (void)addEntriesFromSwitches:;
- (id)copyWithZone:;
@end
