@interface AWESharkEvent : NSObject
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSString scene;
- (id)initWithEventName:scene:params:;
- (void)setScene:;
- (id)scene;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)eventName;
- (id)params;
- (void)setParams:;
+ (id)eventWithEventName:scene:params:;
@end
