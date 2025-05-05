@interface LiftUI.LiftUIFactory : NSObject
- (id)init;
+ (id)viewControllerWithJson:delegate:dataSource:;
+ (id)viewControllerWithData:delegate:dataSource:;
+ (id)viewControllerWithUrl:delegate:dataSource:;
@end
