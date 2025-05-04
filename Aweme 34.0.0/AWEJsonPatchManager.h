@interface AWEJsonPatchManager : NSObject
- (BOOL)patchOriginModel:withPatch:patchedModelKeyPaths:error:;
- (BOOL)p_isValidPatchInfo:;
- (void)writeModelPath:intoDictionary:;
- (BOOL)patchOriginModel:withPatchInfo:withPatch:error:;
- (BOOL)patchOriginModel:withPatch:error:;
+ (id)propertyKeyDictionary;
+ (void)reversePropertyMap:className:;
+ (void)setPropertyKeyDictionary:;
+ (id)classAdapterDictionary;
+ (void)setClassAdapterDictionary:;
+ (void)setError:errorCode:;
@end
