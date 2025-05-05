@interface BDUGSyncNetwork : NSObject
+ (id)URLStringWithPath:;
+ (void)fetchHTTPChannelData:completion:;
+ (void)subscribeTopicWithJson:completion:;
+ (void)unsubscribeTopicWithJson:completion:;
@end
