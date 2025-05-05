@interface MSFlagTriageAction : MSFlagChangeTriageAction
@property (nonatomic) Q cachedFlagState;
@property (nonatomic) NSNumber flagColor;
- (void).cxx_destruct;
- (id)flagColor;
- (void)setFlagColor:;
- (void)_toggleFlagWithBuilder:;
- (BOOL)flagState;
- (BOOL)_isFlagged;
- (void)_toggleCachedFlagState;
- (unsigned long long)cachedFlagState;
- (void)setCachedFlagState:;
@end
