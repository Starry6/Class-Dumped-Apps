@interface ToygerLocalMatchUtils : NSObject
+ (BOOL)saveTemplate:withUserId:atPath:;
+ (BOOL)checkTemplateStatus;
+ (BOOL)cleanTemplate;
+ (id)getTemplatewithUserId:;
+ (BOOL)saveTemplate:withUserId:;
+ (id)uid;
@end
