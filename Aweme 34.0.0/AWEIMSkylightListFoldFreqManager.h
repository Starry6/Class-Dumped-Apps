@interface AWEIMSkylightListFoldFreqManager : NSObject
+ (BOOL)isDefaultFoldSkylight;
+ (id)skylightFoldExpDict;
+ (void)markSkylightClick;
+ (id)lastSkylightFoldText;
+ (void)markSkylightFold;
+ (void)markSkylightExpand;
+ (void)setLastSkylightFoldText:;
+ (id)skylightFoldStorage;
+ (void)writeSkylightFoldStorage:;
+ (BOOL)enableMarkSkylightOperation;
+ (BOOL)enableFoldSkylightAB;
@end
