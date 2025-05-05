@interface TIInputModeLocaleIdentifierOverrideMapping : NSObject
@property (nonatomic) NSDictionary overrideMapping;
- (unsigned char)localeIdentifierHasOverride:;
- (id)overrideMapping;
- (void).cxx_destruct;
- (id)overrideLocaleForIdentifier:;
+ (id)sharedInstance;
@end
