@interface AWEIMLiveCustomServiceTracker : NSObject
+ (id)commonTabParamsFromExtra:role:isInLive:;
+ (id)commonChatParamsFromExtra:con:role:isInLive:;
+ (id)roleString:;
+ (id)getEnterMethod:isInLive:;
@end
