@interface AWECommercePushDispatcher : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)handleCompanyMessage:;
+ (void)handleOrderMessage:;
+ (void)handleCommercePushMessage:;
@end
