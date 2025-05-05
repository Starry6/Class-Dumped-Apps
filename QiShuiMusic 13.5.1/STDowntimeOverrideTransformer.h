@interface STDowntimeOverrideTransformer : NSObject
+ (id)coreOverrideFromDowntimeOverride:existingDowntimeOverride:inContext:;
+ (id)downtimeOverrideFromCoreDowntimeOverride:inContext:;
@end
