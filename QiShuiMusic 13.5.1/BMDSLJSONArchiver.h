@interface BMDSLJSONArchiver : NSCoder
+ (id)archivedDataWithDSL:;
+ (void)registerJSONTransformers;
+ (id)archivedDataWithObject:;
+ (id)archivedStringWithDSL:;
+ (id)archiveCompatibleObjectWithObject:options:userInfo:;
+ (id)archivedStringWithObject:;
@end
