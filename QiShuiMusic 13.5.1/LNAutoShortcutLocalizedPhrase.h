@interface LNAutoShortcutLocalizedPhrase : NSObject
@property (nonatomic) NSString localizedPhrase;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString basePhraseTemplate;
@property (nonatomic) NSUUID parameterIdentifier;
@property (nonatomic) BOOL primary;
@property (nonatomic) NSString signature;
- (id)signature;
- (id)bundleIdentifier;
- (BOOL)isPrimary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)localizedPhrase;
- (id)parameterIdentifier;
- (id)basePhraseTemplate;
- (id)initWithLocalizedPhrase:bundleIdentifier:basePhraseTemplate:parameterIdentifier:;
- (id)initWithLocalizedPhrase:bundleIdentifier:basePhraseTemplate:parameterIdentifier:primary:;
- (id)initWithLocalizedPhrase:bundleIdentifier:basePhraseTemplate:parameterIdentifier:primary:signature:;
+ (BOOL)supportsSecureCoding;
@end
