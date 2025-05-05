@interface IDSLogFormatter : NSObject
+ (id)descriptionForObject:options:level:;
+ (id)descriptionForDictionary:options:level:;
+ (id)descriptionForString:options:;
+ (id)descriptionForDictionary:options:;
+ (id)descriptionForData:options:;
+ (id)descriptionForArray:options:level:;
+ (id)descriptionForObject:options:;
+ (id)descriptionForArray:options:;
@end
