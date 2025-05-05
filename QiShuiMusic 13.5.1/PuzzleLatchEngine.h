@interface PuzzleLatchEngine : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)kitView:willCreatedWithContext:;
- (void)evaluatePrefetch:;
- (id)getUniqueLatchID;
- (void)injectLynxViewWithBuilder:latchID:business:url:;
- (void)setLatchID:forLynxView:;
- (void)stopEvaluateIfNeeded:;
+ (void)loadSwizzled;
+ (id)providePuzzleLatchEngineProtocol:;
+ (id)sharedEngine;
@end
