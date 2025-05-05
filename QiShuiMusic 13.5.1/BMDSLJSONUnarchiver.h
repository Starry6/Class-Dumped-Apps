@interface BMDSLJSONUnarchiver : NSCoder
+ (id)unarchiveObjectFromString:;
+ (id)unarchiveDSLFromString:;
+ (id)unarchiveDSLFromData:;
+ (id)unarchiveObjectFromData:;
@end
