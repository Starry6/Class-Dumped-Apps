@interface LNMacApplicationConnectionOptions : LNConnectionOptions
@property (nonatomic) BOOL background;
- (BOOL)isBackground;
- (id)init;
- (void)setBackground:;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
