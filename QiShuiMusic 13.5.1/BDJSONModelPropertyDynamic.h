@interface BDJSONModelPropertyDynamic : JSONModel
- (void)dynamicSetBool:;
- (float)dynamicGetFloat;
- (id)dynamicGet;
- (BOOL)dynamicGetBool;
- (double)dynamicGetDouble;
- (int)dynamicGetSInt32;
- (long long)dynamicGetSInt64;
- (void)dynamicSet:;
- (void)dynamicSetDouble:;
- (void)dynamicSetFloat:;
- (void)dynamicSetSInt32:;
- (void)dynamicSetSInt64:;
- (id)getIVarNameBySetMethod:;
- (id)getIvarPtr:;
+ (id)classProperytiesDic;
+ (BOOL)resolveInstanceMethod:;
@end
