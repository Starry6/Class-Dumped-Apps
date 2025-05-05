@interface SFCounterfactualInfo : NSObject
@property (nonatomic) BOOL cfDiffered;
@property (nonatomic) BOOL cfUsed;
@property (nonatomic) Q cfError;
- (BOOL)cfDiffered;
- (void)setCfDiffered:;
- (BOOL)cfUsed;
- (void)setCfUsed:;
- (unsigned long long)cfError;
- (void)setCfError:;
@end
