@interface IESLiveSaaSNetworkUtilities : NSObject
- (void).cxx_destruct;
+ (BOOL)isWiFiConnected;
+ (id)connectMethodName;
+ (BOOL)is2GConnected;
+ (BOOL)is3GConnected;
+ (BOOL)is4GConnected;
+ (BOOL)isNetworkConnected;
@end
