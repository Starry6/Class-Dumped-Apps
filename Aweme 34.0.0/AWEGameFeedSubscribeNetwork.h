@interface AWEGameFeedSubscribeNetwork : NSObject
+ (void)fetchFeedGameSubscribe:completion:;
+ (void)fetchFeedGameAllSubscribe:completion:;
+ (void)fetchFeedGameSubscribeStatus:completion:;
+ (void)fetchFeedGameAllSubscribeStatus:requestSource:completion:;
+ (void)fetchSubscribeFeedGame:completion:;
+ (id)buildGetRequestParam:urlString:;
@end
