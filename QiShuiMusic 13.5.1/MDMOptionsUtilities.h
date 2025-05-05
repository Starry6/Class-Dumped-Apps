@interface MDMOptionsUtilities : NSObject
+ (void)setDefaultMDMOptions:;
+ (id)validatedMDMOptionsFromOptionsDictionary:;
+ (id)defaultMDMOptions;
@end
