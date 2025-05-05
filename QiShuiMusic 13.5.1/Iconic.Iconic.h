@interface Iconic.Iconic : NSObject
- (id)init;
+ (id)iconFontOfSize:;
+ (id)attributedStringWithIcon:pointSize:color:;
+ (id)attributedStringWithIcon:pointSize:color:edgeInsets:;
+ (id)iconFamilyName;
+ (id)imageWithIcon:size:color:;
+ (id)imageWithIcon:size:color:edgeInsets:;
+ (void)registerIcon;
+ (void)unregisterIcon;
+ (long long)iconCount;
@end
