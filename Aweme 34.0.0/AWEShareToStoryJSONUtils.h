@interface AWEShareToStoryJSONUtils : NSObject
+ (id)findObjectsWithURLInJSON:;
+ (id)updatedTemplateDict:withContentDicts:;
+ (id)getConstraintValueInDictionary:withTargetID:constraintKey:;
+ (void)findObjectsWithURLInJSON:results:;
+ (void)updateTemplateDict:withContentDict:;
+ (void)findPathToID:inDictionary:path:;
+ (void)applyUpdates:withPath:contentDict:;
+ (void)mergeDict:withDict:;
@end
