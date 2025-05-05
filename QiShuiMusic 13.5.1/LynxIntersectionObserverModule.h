@interface LynxIntersectionObserverModule : NSObject
@property (nonatomic) @ extraData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)createIntersectionObserver:inComponent:withOptions:;
- (id)initWithLynxContext:;
- (void)observe:selector:withCallbackId:;
- (void)relativeTo:selector:margins:;
- (void)relativeToScreen:margins:;
- (void)relativeToViewport:margins:;
- (void)runOnUIThreadSafely:;
- (void).cxx_destruct;
- (void)disconnect:;
+ (id)methodLookup;
+ (id)name;
@end
