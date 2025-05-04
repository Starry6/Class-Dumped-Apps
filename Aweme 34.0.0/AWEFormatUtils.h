@interface AWEFormatUtils : NSObject
+ (id)findMessageVCIfExit:;
+ (id)getSyncedExtValueFromMsg:msg:;
+ (id)formatQuerySourceSetting;
+ (id)getTrackLocalExtDictFromMsg:;
+ (BOOL)formatEnterLiveEnable;
+ (BOOL)isVaildId:;
+ (BOOL)isEmptyId:;
+ (id)getLocalExtValueFromMsg:msg:;
@end
