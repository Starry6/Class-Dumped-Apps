@interface LegacyTileCacheTombstone : NSObject
@property (nonatomic) BOOL dead;
- (BOOL)isDead;
- (void)setDead:;
@end
