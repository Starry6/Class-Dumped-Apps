@interface SGKeyValueCacheFile : NSObject
- (id)initWithFileDescriptor:;
- (id)valueForKey:;
- (id)initTemporaryForOverwritingCache:;
- (id)init;
- (void)dealloc;
- (void)deleteValueByRecordId:;
- (void)deleteValueByRecordIdSet:;
- (void)setValueIfNotPresentWithDict:fromRecordId:;
- (id)initWithCoder:;
- (void)commitTemporaryFile;
- (void)encodeWithCoder:;
- (id)initBlank;
- (id)valueForKey:found:;
- (void).cxx_destruct;
- (id)_map;
- (id)initWithPath:;
- (id)description;
- (id)initInMemory;
- (void)setValueIfNotPresent:forKey:fromRecordId:;
- (void)setValue:forKey:fromRecordId:;
+ (id)fullNameForEncodedContact:;
+ (id)pathToCache;
+ (BOOL)supportsSecureCoding;
+ (id)keyValueCacheForPath:;
+ (id)encodedStringForFullName:;
+ (void)clearCacheAtPath:;
@end
