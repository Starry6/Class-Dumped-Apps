@interface IPASerializationManager : NSObject
+ (id)serialize:error:;
+ (id)deserialize:originator:format:formatVersion:error:;
+ (id)serializerMap;
+ (id)_serializerForFormat:formatVersion:error:;
+ (char)adjustmentTypeForFormat:formatVersion:;
+ (id)formatForAdjustmentStack:;
+ (id)serializeWithCurrentDefaultFormat:error:;
+ (id)serializeWithCurrentDefaultFormat:format:formatVersion:error:;
+ (id)serialize:format:formatVersion:error:;
+ (id)debug_serializeEnvelope:error:;
+ (char)debug_adjustmentTypeFromEnvelopeDictionary:;
+ (id)debug_deserializeEnvelopeDictionary:error:;
@end
