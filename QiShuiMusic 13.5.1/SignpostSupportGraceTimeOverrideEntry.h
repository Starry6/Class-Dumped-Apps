@interface SignpostSupportGraceTimeOverrideEntry : NSObject
@property (nonatomic) NSMutableDictionary overrides;
@property (nonatomic) Q entryLevel;
@property (nonatomic) SignpostSupportAnimationGraceTime defaultGraceTime;
- (id)initWithEntryLevel:;
- (void)setDefaultGraceTime:;
- (id)debugDescriptionWithWhitespacePrefix:;
- (id)overrides;
- (id)defaultGraceTime;
- (id)debugDescription;
- (unsigned long long)entryLevel;
- (void).cxx_destruct;
@end
