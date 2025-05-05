@interface WBSPasswordBreachConfigurationDictionaryUnpacker : NSObject
@property (nonatomic) BOOL errorOccurred;
- (id)URLForKey:;
- (id)initWithDictionary:;
- (unsigned long long)unsignedIntegerForKey:minimumValue:maximumValue:;
- (BOOL)optionalBoolForKey:defaultValue:;
- (BOOL)errorOccurred;
- (id)sortedUnsignedIntegerArrayForKey:minimumValue:maximumValue:ascending:;
- (void).cxx_destruct;
- (id)stringForKey:minimumLength:;
- (id)dataFromHexStringForKey:expectedLength:;
- (id)_valueOfClass:forKey:required:;
@end
