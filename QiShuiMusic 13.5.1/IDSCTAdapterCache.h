@interface IDSCTAdapterCache : NSObject
@property (nonatomic) Q dualSIMEnabled;
@property (nonatomic) Q isAnySIMUsable;
@property (nonatomic) Q isAnySIMInserted;
@property (nonatomic) Q supportsIdentification;
@property (nonatomic) Q doesAnySIMSupportsSimultaneousVoiceAndDataRightNow;
@property (nonatomic) NSArray sims;
- (unsigned long long)supportsIdentification;
- (unsigned long long)isAnySIMUsable;
- (unsigned long long)dualSIMEnabled;
- (id)debugDescription;
- (unsigned long long)isAnySIMInserted;
- (void)setIsAnySIMUsable:;
- (unsigned long long)doesAnySIMSupportsSimultaneousVoiceAndDataRightNow;
- (void)setSims:;
- (void).cxx_destruct;
- (void)setIsAnySIMInserted:;
- (id)sims;
- (void)setSupportsIdentification:;
- (void)setDualSIMEnabled:;
- (void)setDoesAnySIMSupportsSimultaneousVoiceAndDataRightNow:;
@end
