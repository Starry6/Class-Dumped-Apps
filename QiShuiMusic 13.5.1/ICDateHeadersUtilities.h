@interface ICDateHeadersUtilities : NSObject
+ (void)clearCache;
+ (id)menuTitle;
+ (BOOL)showsQueryDateHeaders;
+ (int)defaultDateHeadersType;
+ (void)setDefaultDateHeadersType:;
+ (int)queryDateHeadersType;
+ (void)setQueryDateHeadersType:;
+ (BOOL)supportsQueryDateHeaders;
+ (id)actionItemTitleWithDateHeadersType:;
+ (id)stringForDateHeadersType:;
+ (void)setDateHeadersUserPreference:forKey:postNotificationName:;
+ (BOOL)isShowingQueryDateHeadersForDateHeadersType:;
@end
