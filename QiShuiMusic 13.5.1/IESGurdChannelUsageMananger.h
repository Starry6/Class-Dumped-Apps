@interface IESGurdChannelUsageMananger : NSObject
+ (void)accessDataWithType:accessKey:channel:hitData:;
+ (void)addChannel:channel:;
+ (BOOL)containsChannel:channel:;
+ (void)downloadByPreChannels:;
+ (BOOL)isChannelUsed:channel:;
+ (void)removeChannel:channel:;
@end
