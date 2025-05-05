@interface ECNWActivity : NSObject
- (void).cxx_destruct;
- (void)startActivity;
- (void)stopActivityWithSuccess:;
- (id)initWithDomain:type:;
+ (void)attachCurrentActivityToConnection:;
+ (void)detachCurrentActivityFromConnection:;
@end
