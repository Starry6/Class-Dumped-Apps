@interface IESECMallUtil : NSObject
+ (double)getFloatFromNumber:withDefault:;
+ (id)fetchWay:;
+ (double)getHeightFromUILabel:;
+ (BOOL)isNewScale:;
+ (BOOL)isNewUI:;
+ (id)replaceSchemaByRegular:extraParams:withIndex:listUpdater:;
+ (id)replaceSchemaByRegular:withIndex:listUpdater:;
+ (id)safeStringValueForKey:fromDic:;
+ (void)setGreyModeInLayer:withSaturation:;
+ (id)substring:toIndex:;
@end
