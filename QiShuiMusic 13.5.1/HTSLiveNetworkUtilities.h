@interface HTSLiveNetworkUtilities : NSObject
- (void).cxx_destruct;
+ (BOOL)isWiFiConnected;
+ (id)connectMethodName;
+ (BOOL)is2GConnected;
+ (BOOL)is3GConnected;
+ (BOOL)is4GConnected;
+ (BOOL)is5GConnected;
+ (BOOL)isNetworkConnected;
@end
