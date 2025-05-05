@interface PFAdjustmentSerialization : NSObject
+ (id)serializeAdjustments:error:;
+ (id)deserializeAdjustmentsFromData:error:;
+ (id)serializeDictionary:error:;
+ (id)deserializeDictionaryFromData:error:;
+ (BOOL)validateArchive:containsEntryWithKey:ofType:errors:;
+ (BOOL)validateValue:isOfType:errors:;
@end
