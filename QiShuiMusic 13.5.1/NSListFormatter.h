@interface NSListFormatter : NSFormatter
@property (nonatomic) NSLocale locale;
@property (nonatomic) NSFormatter itemFormatter;
- (id)stringForObjectValue:;
- (void)setLocale:;
- (id)init;
- (void)dealloc;
- (id)locale;
- (id)initWithLocale:;
- (id)_listFormatter;
- (id)stringFromItems:;
- (id)_stringFromStringArray:;
- (id)itemFormatter;
- (void)setItemFormatter:;
+ (id)localizedStringByJoiningStrings:;
@end
