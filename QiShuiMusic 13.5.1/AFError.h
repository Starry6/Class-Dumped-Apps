@interface AFError : NSObject
- (id)init;
+ (id)new;
+ (id)errorWithCode:description:underlyingErrors:;
+ (id)errorWithCode:;
+ (id)errorWithCode:description:underlyingError:;
+ (id)errorWithCode:description:;
@end
