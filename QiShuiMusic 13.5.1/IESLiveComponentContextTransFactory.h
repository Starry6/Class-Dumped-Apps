@interface IESLiveComponentContextTransFactory : NSObject
- (id)componentContextWithSaaSComponentContext:needToSave:;
- (id)fetchSaaSComponentContextWithComponentContextInCache:;
+ (id)sharedFactory;
+ (id)cache;
@end
