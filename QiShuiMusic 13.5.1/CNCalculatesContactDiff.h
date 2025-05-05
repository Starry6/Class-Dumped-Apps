@interface CNCalculatesContactDiff : NSObject
+ (id)diffContact:to:error:;
+ (void)addSingleValueUpdateTo:forProperty:contact1:contact2:;
+ (BOOL)shouldSaveDuplicateProperty:value1:value2:;
+ (void)addMultiValueUpdateTo:forProperty:contact1:contact2:;
+ (void)cleanOrphanedCropUpdates:withContact1:contact2:;
@end
