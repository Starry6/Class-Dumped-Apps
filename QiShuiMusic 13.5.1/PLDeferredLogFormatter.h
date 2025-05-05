@interface PLDeferredLogFormatter : NSObject
- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (id)stringWithFormat:;
- (void)addLogWithContext:timestamp:pointer:;
- (id)_formattedStringForPrinting;
- (id)_JSONStringPretty:;
- (id)_plistString;
+ (id)_logTypeForContext:;
+ (id)_entityDescriptionForContext:;
+ (BOOL)_isManagedObjectPointerForContext:;
+ (id)_serializableDictionaryForEntry:;
@end
