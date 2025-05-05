@interface LNEmbeddedApplicationConnectionOptions : LNConnectionOptions
@property (nonatomic) BOOL suspended;
@property (nonatomic) BOOL sceneless;
- (id)init;
- (BOOL)suspended;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (void)setSuspended:;
- (void)setSceneless:;
- (id)copyWithZone:;
- (BOOL)sceneless;
@end
