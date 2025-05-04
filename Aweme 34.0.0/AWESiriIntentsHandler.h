@interface AWESiriIntentsHandler : NSObject
@property (nonatomic) BOOL setupBackgroundListener;
@property (nonatomic) NSString continuePlayScheme;
@property (nonatomic) AWESiriIntentsModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onAppDidBecomeActive;
- (id)generateJumpScheme:;
- (void)setContinuePlayScheme:;
- (void)setSetupBackgroundListener:;
- (id)continuePlayScheme;
- (BOOL)setupBackgroundListener;
- (void)setModel:;
- (id)init;
- (id)model;
- (void).cxx_destruct;
- (void)confirmPlayMedia:completion:;
- (void)handlePlayMedia:completion:;
- (void)resolveMediaItemsForPlayMedia:withCompletion:;
+ (id)sharedInstance;
@end
