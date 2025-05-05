@interface ASSArpResolveManager : NSObject
@property (nonatomic) @? callback;
- (void)pingResult:;
- (void)startPing:;
- (id)callback;
- (void)setCallback:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
