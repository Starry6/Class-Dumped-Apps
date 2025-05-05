@interface WBSPasswordCharacterClass : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString value;
- (id)initWithType:value:;
- (unsigned long long)hash;
- (long long)type;
- (void).cxx_destruct;
- (id)value;
- (BOOL)isEqual:;
+ (id)customCharacterClassWithValue:;
+ (id)namedCharacterClassWithType:;
+ (id)asciiPrintableCharacterClass;
+ (id)digitCharacterClass;
+ (id)lowercaseCharacterClass;
+ (id)uppercaseCharacterClass;
+ (id)specialCharacterClass;
+ (id)unicodeCharacterClass;
@end
