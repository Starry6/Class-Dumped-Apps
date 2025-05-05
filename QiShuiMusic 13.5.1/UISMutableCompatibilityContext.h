@interface UISMutableCompatibilityContext : UISCompatibilityContext
@property (nonatomic) NSArray supportedDisplaySizes;
- (id)copyWithZone:;
- (void)setSupportedDisplaySizes:;
@end
