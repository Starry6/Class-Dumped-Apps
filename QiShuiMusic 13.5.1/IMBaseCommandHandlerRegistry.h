@interface IMBaseCommandHandlerRegistry : NSObject
@property (nonatomic) NSDictionary handlers;
@property (nonatomic) NSDictionary standardHandlers;
@property (nonatomic) BOOL lockedDown;
@property (nonatomic) NSDictionary lockdownHandlers;
- (id)handlers;
- (id)init;
- (BOOL)canAddCommand:;
- (void).cxx_destruct;
- (id)noopHandlerForCommand:;
- (BOOL)hasHandlerForCommand:;
- (BOOL)isLockedDown;
- (BOOL)hasLockdownHandlerForCommand:;
- (void)setLockdownHandler:forCommand:;
- (void)setPassThroughLockdownHandlerForCommand:;
- (void)setStandardHandler:forCommand:;
- (id)handlerForCommand:;
- (id)standardHandlers;
- (id)lockdownHandlers;
@end
