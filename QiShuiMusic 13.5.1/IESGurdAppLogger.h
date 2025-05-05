@interface IESGurdAppLogger : NSObject
+ (void)recordCleanStats:accessKey:channel:packageID:extra:;
+ (void)recordEventWithType:extraInfo:errorMessage:;
+ (void)recordEventWithType:extraInfo:errorMessage:accessKey:channels:;
+ (void)recordUpdateStats:;
+ (void)uploadEvent:data:;
+ (void)recordEvent:;
@end
