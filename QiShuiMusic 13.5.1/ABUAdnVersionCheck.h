@interface ABUAdnVersionCheck : NSObject
+ (BOOL)_supportAdnVersion:platfromName:min:max:;
+ (BOOL)compareLowVersion:highVersion:;
+ (BOOL)deptNumInputShouldNumber:;
+ (id)getAdmobVersion:;
+ (id)rangeOfSubString:inString:;
+ (BOOL)supportAdnVersion:platfromName:min:max:;
@end
