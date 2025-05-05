@interface AWEIMCommonUtil : NSObject
+ (id)attachmentOjectWithImage:;
+ (id)currentNetType;
+ (double)currentServerTime;
+ (id)im_safeURL:;
+ (id)im_safeURLArrayWitURL:;
+ (id)queryURLString:queryKey:;
+ (BOOL)shouldShowRecallMenuItemWithMessage:conversation:;
@end
