@interface AWEACCRouterImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)transferToURLString:;
- (id)viewControllerForURLString:;
- (BOOL)canOpenURLString:;
- (void)transferToURLStringWithFormat:;
- (id)URLString:byAddingQueryDict:;
@end
