@interface STMutableActivityAttributionCatalog : STActivityAttributionCatalog
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAttributions:forKey:;
- (void)removeAttribution:forKey:;
- (BOOL)applyDiff:;
- (void)addAttribution:forKey:;
- (void)removeAttributionsForKey:;
- (id)copyWithZone:;
@end
