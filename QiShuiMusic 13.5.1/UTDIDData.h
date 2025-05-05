@interface UTDIDData : NSObject
+ (id)_getDictFromPasteboard:;
+ (void)_setDict:forPasteboard:;
+ (id)appUid;
+ (id)data;
+ (void)reset;
+ (id)dataWithError:;
@end
