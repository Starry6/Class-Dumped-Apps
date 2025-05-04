@interface AWEPOIAwemeTableViewControllerFactory : NSObject
+ (id)awemeTableVCWithVideoStyle:dataController:params:;
+ (id)awemeTableVCWithVideoStyle:feedSceneType:params:;
+ (id)dataControllerWithFeedScene:params:;
+ (id)awemeTableVCWithDataController:params:;
+ (id)urlStringForOGCVideoStyleWithParams:;
+ (id)trackerDataWithInitParams:;
+ (BOOL)openAwemeTableViewController:;
@end
