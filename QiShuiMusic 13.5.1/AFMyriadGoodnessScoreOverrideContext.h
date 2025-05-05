@interface AFMyriadGoodnessScoreOverrideContext : NSObject
@property (nonatomic) BOOL overrideContext;
@property (nonatomic) C overriddenAdjustedScore;
- (BOOL)overrideContext;
- (void)setOverrideContext:;
- (unsigned char)overriddenAdjustedScore;
- (void)setOverriddenAdjustedScore:;
@end
