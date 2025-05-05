@interface EMListUnsubscribeMessageGenerator : NSObject
+ (id)dateString;
+ (id)messageHeadersWithCommand:headersFactory:;
+ (id)localizedBodyForCommand:;
+ (id)senderForCommand:;
@end
