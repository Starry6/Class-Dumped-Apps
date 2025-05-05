@interface UIDictationCommandHandlerManager : NSObject
@property (nonatomic) NSMutableDictionary commandHandlers;
- (id)init;
- (void).cxx_destruct;
- (id)_commandHandlerWithLocale:;
- (id)commandHandlers;
- (void)setCommandHandlers:;
+ (id)sharedInstance;
+ (id)commandHandlerWithLocale:;
@end
