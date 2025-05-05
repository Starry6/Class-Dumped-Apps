@interface CNLocalization : NSObject
+ (id)localizedStringForString:class:lookupBlock:returningNilIfNotFound:;
+ (id)localizedStringForString:bundle:table:lookupBlock:returningNilIfNotFound:;
+ (id)localizedStringForString:class:returningNilIfNotFound:;
+ (id)localizedStringForString:bundle:table:returningNilIfNotFound:;
+ (id)localizedStringForInteger:;
@end
