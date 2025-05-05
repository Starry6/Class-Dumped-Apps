@interface StoreKit.SKTwoErrorEvent : SKBaseErrorEvent
@property (nonatomic) NSString eventName;
- (id)init;
- (id)eventName;
- (id)createPayload;
@end
