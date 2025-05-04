@interface AWETeenSubscribeManager : NSObject
+ (void)updateSubscribeStatus:blockStatus:userID:secUserID:trackerParams:completion:;
+ (void)updateSubscribeStatus:blockStatus:userID:secUserID:enterFrom:enterMethod:completion:;
@end
