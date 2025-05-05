@interface LynxUIMethodModule : NSObject
@property (nonatomic) @ extraData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithLynxContext:;
- (void)invokeUIMethod:nodes:method:params:callback:;
- (void).cxx_destruct;
+ (id)methodLookup;
+ (void)runOnUiThread:;
+ (id)wrapInvokeUIMethodCallback:;
+ (id)name;
@end
