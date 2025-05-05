@interface UgenBehavior : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) @? createwidget;
@property (nonatomic) @? createImageHandler;
@property (nonatomic) @? createLottieHandler;
@property (nonatomic) @? createMotionHandler;
- (id)createImageHandler;
- (id)createLottieHandler;
- (id)createMotionHandler;
- (id)createwidget;
- (id)initWithImageHandler:;
- (id)initWithLottieHandler:;
- (id)initWithMotionHandler:;
- (id)initWithName:widget:;
- (void).cxx_destruct;
- (id)name;
@end
