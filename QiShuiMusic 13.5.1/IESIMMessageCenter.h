@interface IESIMMessageCenter : NSObject
- (id)getMessage:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedCenter;
@end
