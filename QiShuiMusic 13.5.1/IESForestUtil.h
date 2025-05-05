@interface IESForestUtil : NSObject
+ (void)generateResponseHeaderAndData:response:data:fixCORS:completion:;
+ (id)getOriginalFiledKey:fromHeader:;
+ (id)fixResponseHeader:request:fixCORS:;
+ (id)getContainerSessionID:;
+ (id)pointAddress:;
+ (id)sdkVersion;
@end
