@interface MMPTools : NSObject
+ (id)MD5StringFromData:;
+ (id)colorWithHexStr:;
+ (long long)compareVersion:with:;
+ (id)dataFromDict:;
+ (id)dictFromData:;
+ (id)dictFromStr:;
+ (double)floatWithHexStr:;
+ (id)imageWithColor:size:;
+ (id)strFromDict:;
+ (id)urlDecode:;
+ (id)urlEncode:;
+ (id)appName;
+ (id)keyWindow;
+ (id)screenRect;
@end
