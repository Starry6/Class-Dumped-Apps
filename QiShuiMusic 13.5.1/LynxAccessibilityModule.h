@interface LynxAccessibilityModule : NSObject
@property (nonatomic) LynxContext context;
@property (nonatomic) @ extraData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)accessibilityAnnounce:callback:;
- (void)registerMutationStyle:callback:;
- (id)initWithLynxContext:;
- (void)invokeCallback:withParams:;
- (void)runOnUIThreadSafely:;
- (id)context;
- (void).cxx_destruct;
- (void)setContext:;
+ (id)methodLookup;
+ (id)name;
@end
