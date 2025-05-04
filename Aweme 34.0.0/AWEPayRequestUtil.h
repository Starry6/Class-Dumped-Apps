@interface AWEPayRequestUtil : NSObject
+ (id)getWithURLString:params:modelClass:completion:;
+ (void)p_trackWithEvent:params:;
+ (void)p_monitorNetWorkWithUrlStr:duration:model:error:;
@end
