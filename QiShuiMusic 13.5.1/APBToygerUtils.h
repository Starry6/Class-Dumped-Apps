@interface APBToygerUtils : NSObject
+ (void)APBToygerMainThread:;
+ (BOOL)checkFileunderPath:;
+ (id)extractNumberFromText:;
+ (int)getCodefrom:withLength:;
+ (id)getTextContentforKey:;
+ (id)lastWindow;
+ (id)loadImageFromBundleNamed:;
+ (id)localizedTextForKey:;
+ (id)randomString:;
+ (BOOL)removeFileunderPath:;
+ (BOOL)writeFileunderPath:;
+ (id)localizedStringForKey:;
+ (id)getBundle;
@end
