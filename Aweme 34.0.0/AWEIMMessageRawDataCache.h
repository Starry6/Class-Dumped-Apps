@interface AWEIMMessageRawDataCache : NSObject
+ (void)tryRequestMessageRawDataWithCell:requestScene:;
+ (void)cancelRequestMessageRawDataWithCell:;
@end
