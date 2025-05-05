@interface UIStoryboardSegue : NSObject
@property (nonatomic) @? prepareHandler;
@property (nonatomic) @? performHandler;
@property (nonatomic) @ sender;
@property (nonatomic) NSString identifier;
@property (nonatomic) UIViewController sourceViewController;
@property (nonatomic) UIViewController destinationViewController;
- (id)init;
- (id)sender;
- (id)sourceViewController;
- (id)identifier;
- (void)_prepare;
- (void).cxx_destruct;
- (void)setSender:;
- (id)performHandler;
- (void)perform;
- (id)initWithIdentifier:source:destination:;
- (id)destinationViewController;
- (void)setPerformHandler:;
- (id)prepareHandler;
- (void)setPrepareHandler:;
+ (id)segueWithIdentifier:source:destination:performHandler:;
@end
