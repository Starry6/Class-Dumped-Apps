@interface PLModelMigratorRebuildProgressFraction : NSObject
@property (nonatomic) BOOL rebuildEnabled;
@property (nonatomic) BOOL isLegacyRecoveryEnabled;
- (id)initWithLegacyRecoveryEnabled:;
- (BOOL)isLegacyRecoveryEnabled;
- (float)progressFractionForType:;
- (BOOL)isRebuildEnabled;
- (void)setRebuildEnabled:;
@end
