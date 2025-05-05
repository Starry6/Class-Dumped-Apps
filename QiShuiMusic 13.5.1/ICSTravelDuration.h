@interface ICSTravelDuration : ICSProperty
@property (nonatomic) NSString transparency;
@property (nonatomic) ICSDuration duration;
- (void)setDuration:;
- (id)duration;
- (void)_ICSStringWithOptions:appendingToString:additionalParameters:;
- (BOOL)alwaysHasParametersToSerialize;
- (id)transparency;
- (void)setTransparency:;
@end
