@interface EARVoiceCommandSpec : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) c valence;
@property (nonatomic) NSSet fstRelativePaths;
@property (nonatomic) NSString fstSymbol;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (char)valence;
- (id)plistJSONDictionary;
- (id)initWithPlistJSONDictionary:;
- (id)initWithIdentifier:valence:fstRelativePaths:fstSymbol:;
- (id)fstRelativePaths;
- (id)fstSymbol;
+ (BOOL)supportsSecureCoding;
@end
