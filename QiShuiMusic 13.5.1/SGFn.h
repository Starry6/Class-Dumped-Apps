@interface SGFn : NSObject
+ (id)map:f:;
+ (id)filter:f:;
+ (id)mapAndFilter:f:;
+ (id)parMapOnQueue:concurrencyLimit:input:f:;
+ (id)simpleDedupe:;
@end
