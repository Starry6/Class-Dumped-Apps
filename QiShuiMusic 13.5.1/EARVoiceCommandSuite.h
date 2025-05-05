@interface EARVoiceCommandSuite : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSSet commandSpecs;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)plistJSONDictionary;
- (id)initWithPlistJSONDictionary:;
- (id)initWithIdentifier:commands:;
- (id)commandSpecs;
+ (BOOL)supportsSecureCoding;
@end
