@interface IWKDelegateCompletionProbe : NSObject
@property (nonatomic) NSString probeName;
@property (nonatomic) @ caller;
@property (nonatomic) @ completionHandler;
- (void)callOnce:;
- (id)probeName;
- (void)setProbeName:;
- (id)caller;
- (void)dealloc;
- (void)setCompletionHandler:;
- (void)setCaller:;
- (void).cxx_destruct;
- (id)completionHandler;
+ (void)p_monitorLog:;
+ (id)probeWithSelector:;
+ (void)setCatchFatalError:;
+ (BOOL)shouldCatchFatalError;
@end
