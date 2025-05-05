@interface Version : NSObject
@property (nonatomic) I major;
@property (nonatomic) I minor;
@property (nonatomic) I bugfix;
@property (nonatomic) NSString modifier;
- (id)modifier;
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqualToVersion:;
- (id)description;
- (unsigned int)major;
- (unsigned int)minor;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithVersionString:error:;
- (id)getVersionAsString;
- (long long)compareToVersion:;
- (BOOL)isAllDigitsInString:;
- (id)versionedKey:modifier:;
- (unsigned int)bugfix;
+ (id)versionZero;
+ (id)pre3_15_0_Mapping;
+ (id)allVersionedKeysForKey:modifier:;
@end
