@interface CUStateEvent : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSDictionary userInfo;
- (void)dealloc;
- (id)userInfo;
- (id)initWithName:userInfo:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
+ (id)enterState;
+ (id)initialTransition;
+ (id)exitState;
@end
