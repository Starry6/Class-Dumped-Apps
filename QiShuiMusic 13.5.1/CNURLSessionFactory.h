@interface CNURLSessionFactory : NSObject
- (id)defaultSessionConfiguration;
- (id)sessionWithConfiguration:delegate:delegateQueue:;
+ (id)defaultFactory;
@end
