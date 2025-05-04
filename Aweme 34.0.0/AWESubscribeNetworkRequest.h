@interface AWESubscribeNetworkRequest : NSObject
+ (void)removeSubscribeCards:onComplete:;
+ (id)paramWithCursor:requestType:limit:hintCardId:hintReceiveTime:;
+ (void)requestSubscribeCardWithParams:onComplete:;
+ (void)setSubscribeMute:onComplete:;
+ (void)requestPreSubscribeListWithHintCardId:hintReceiveTime:onComplete:;
+ (void)removeSubscribeBoxComplete:;
+ (id)arrayToJSONString:;
@end
