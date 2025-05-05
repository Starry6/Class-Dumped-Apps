@interface STBlueprintBackedDowntimeOverrideModifier : NSObject
@property (nonatomic) STBlueprint downtimeBlueprint;
@property (nonatomic) STDowntimeOverride activeOverride;
- (BOOL)_saveWithError:;
- (void).cxx_destruct;
- (id)activeOverride;
- (BOOL)removeDowntimeOverrideWithError:;
- (BOOL)applyDowntimeOverride:error:;
- (id)initWithDowntimeBlueprint:;
- (void)_deleteOrphanedOrTombstonedDowntimeOverridesInContext:;
- (void)_tombstoneDowntimeOverride;
- (id)downtimeBlueprint;
@end
