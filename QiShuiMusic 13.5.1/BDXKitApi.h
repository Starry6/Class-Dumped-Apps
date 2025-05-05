@interface BDXKitApi : NSObject
- (id)provideKitViewWithURL:;
+ (id)preCreateKitView;
+ (id)provideKitViewWithURL:context:;
@end
