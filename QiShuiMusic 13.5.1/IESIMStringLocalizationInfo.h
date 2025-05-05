@interface IESIMStringLocalizationInfo : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSString locale;
@property (nonatomic) NSArray pluralParams;
- (id)initWithKey:locale:;
- (id)initWithKey:locale:pluralParams:;
- (id)pluralParams;
- (void)setPluralParams:;
- (void)setLocale:;
- (id)key;
- (id)locale;
- (void)setKey:;
- (void).cxx_destruct;
@end
