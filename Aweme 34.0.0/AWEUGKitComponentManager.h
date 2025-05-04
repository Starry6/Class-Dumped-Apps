@interface AWEUGKitComponentManager : NSObject
@property (nonatomic) <AWEPzEngineProtocol> engine;
- (void)tryShowUGComponentWithModel:completion:;
- (id)engine;
- (void)setEngine:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
