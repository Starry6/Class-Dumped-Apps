@interface LNAutoShortcutMetadata : NSObject
@property (nonatomic) NSString actionIdentifier;
@property (nonatomic) NSArray phraseTemplates;
@property (nonatomic) LNStaticDeferredLocalizedString title;
@property (nonatomic) LNStaticDeferredLocalizedString shortTitle;
@property (nonatomic) LNStaticDeferredLocalizedString autoShortcutDescription;
@property (nonatomic) NSString systemImageName;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)systemImageName;
- (void)encodeWithCoder:;
- (id)title;
- (id)actionIdentifier;
- (void).cxx_destruct;
- (id)shortTitle;
- (id)description;
- (BOOL)isEqual:;
- (id)phraseTemplates;
- (id)autoShortcutDescription;
- (id)initWithActionIdentifier:phraseTemplates:shortTitle:autoShortcutDescription:systemImageName:;
- (id)initWithActionIdentifier:phraseTemplates:title:shortTitle:autoShortcutDescription:systemImageName:;
+ (BOOL)supportsSecureCoding;
@end
