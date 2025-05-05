@interface AWESubscribeNetworkRequest : NSObject
+ (id)arrayToJSONString:;
+ (id)paramWithCursor:requestType:limit:hintCardId:hintReceiveTime:;
+ (void)removeSubscribeBoxComplete:;
+ (void)removeSubscribeCards:onComplete:;
+ (void)requestPreSubscribeListWithHintCardId:hintReceiveTime:onComplete:;
+ (void)requestSubscribeCardWithParams:onComplete:;
+ (void)setSubscribeMute:onComplete:;
@end
