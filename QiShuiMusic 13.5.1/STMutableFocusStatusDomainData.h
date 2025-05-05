@interface STMutableFocusStatusDomainData : STFocusStatusDomainData
@property (nonatomic) NSString modeIdentifier;
@property (nonatomic) NSString modeName;
@property (nonatomic) NSString modeSymbol;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setModeSymbol:;
- (BOOL)applyDiff:;
- (void)setModeName:;
- (void)setModeIdentifier:;
- (id)copyWithZone:;
@end
