@interface IESIMRouteTransitionInfo : NSObject
@property (nonatomic) NSString URLString;
@property (nonatomic) NSDictionary paramsDictionary;
@property (nonatomic) UIViewController targetViewController;
@property (nonatomic) UIViewController sourceViewController;
@property (nonatomic) q transitionType;
@property (nonatomic) @? transitionCompletion;
- (id)paramsDictionary;
- (void)setParamsDictionary:;
- (void)setTargetViewController:;
- (id)targetViewController;
- (id)init;
- (id)URLString;
- (void)setTransitionType:;
- (id)sourceViewController;
- (long long)transitionType;
- (void)setSourceViewController:;
- (void).cxx_destruct;
- (id)transitionCompletion;
- (void)setTransitionCompletion:;
- (void)setURLString:;
@end
