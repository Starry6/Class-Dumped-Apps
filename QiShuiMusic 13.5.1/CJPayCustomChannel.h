@interface CJPayCustomChannel : CJPayBasicChannel
@property (nonatomic) NSString scheme;
@property (nonatomic) BOOL wakingApp;
- (BOOL)canProcessWithURL:;
- (void)payActionWithDataDict:completionBlock:;
- (void)setWakingApp:;
- (BOOL)wakingApp;
- (id)init;
- (void)dealloc;
- (void)setScheme:;
- (id)scheme;
- (void).cxx_destruct;
- (void)appWillEnterForeground;
+ (void)registerPlugin;
@end
