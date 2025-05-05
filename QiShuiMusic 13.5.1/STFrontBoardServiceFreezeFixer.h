@interface STFrontBoardServiceFreezeFixer : NSObject
- (id)initWithType:context:responder:;
- (id)_initWithFireInterval:repeatInterval:leewayInterval:queue:handler:;
- (id)_initWithInfo:timeout:forResponseOnQueue:withHandler:;
+ (void)hook;
@end
