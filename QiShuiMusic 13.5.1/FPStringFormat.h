@interface FPStringFormat : NSObject
@property (nonatomic) NSString format;
@property (nonatomic) NSArray keyPaths;
@property (nonatomic) Q length;
- (void)setFormat:;
- (void)setKeyPaths:;
- (id)keyPaths;
- (id)format;
- (void).cxx_destruct;
- (unsigned long long)length;
- (id)evaluateWithValuesByName:error:;
+ (id)formatForPlistObject:localizationLookup:;
+ (id)formatForStringFormatDict:localizationLookup:;
@end
