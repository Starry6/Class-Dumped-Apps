@interface NRSecureDevicePropertyStore : NSObject
@property (nonatomic) BOOL dirty;
- (id)init;
- (void)forceWriteSecurePropertyID:withValue:;
- (void)forceImportSecureProperties:;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)initWithCoder:;
- (id)allSecurePropertyIDs;
- (void)removeSecureProperty:;
- (void)encodeWithCoder:;
- (id)objectForKeyedSubscript:;
- (BOOL)dirty;
- (void).cxx_destruct;
- (id)description;
- (id)securePropertyForID:;
- (unsigned long long)count;
- (id)storeSecureProperty:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)enclosedClassTypes;
+ (id)classTypes;
@end
