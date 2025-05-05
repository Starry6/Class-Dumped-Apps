@interface CNUICoreContactPropertyValueFilterFactory : NSObject
+ (id)nicknameFilter;
+ (id)photoFilter;
+ (id)noteFilter;
+ (id)relationshipsFilter;
+ (id)aggregatePropertyValueFilterWithValueFilters:;
@end
