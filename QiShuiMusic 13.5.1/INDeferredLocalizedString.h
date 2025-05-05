@interface INDeferredLocalizedString : NSString
@property (nonatomic) NSString _formatKey;
@property (nonatomic) NSString _table;
@property (nonatomic) NSArray _arguments;
@property (nonatomic) NSString _bundleIdentifier;
@property (nonatomic) NSURL _bundleURL;
@property (nonatomic) NSString _cachedLocalization;
- (Class)classForKeyedArchiver;
- (unsigned short)characterAtIndex:;
- (id)_bundleURL;
- (void)getCharacters:range:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)length;
- (Class)classForCoder;
- (id)copyWithZone:;
- (id)_arguments;
- (id)_table;
- (id)_bundleIdentifier;
- (id)_formatKey;
- (id)_cachedLocalization;
- (id)initWithDeferredFormat:fromTable:bundle:arguments:;
- (id)initWithDeferredFormat:fromTable:bundleIdentifier:bundleURL:arguments:;
- (id)localizeForLanguage:;
- (id)_intents_encodeForProto;
+ (BOOL)supportsSecureCoding;
@end
