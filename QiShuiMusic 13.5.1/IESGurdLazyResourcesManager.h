@interface IESGurdLazyResourcesManager : NSObject
- (BOOL)isLazyChannel:channel:;
- (BOOL)isLazyResourceWithModel:;
- (id)lazyResourceInfoWithAccesskey:channel:;
+ (id)sharedManager;
@end
