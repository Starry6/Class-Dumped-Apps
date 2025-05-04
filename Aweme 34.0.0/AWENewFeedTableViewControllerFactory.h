@interface AWENewFeedTableViewControllerFactory : NSObject
+ (Class)aweFeedTableViewControllerClass;
+ (id)newAWEFeedTableViewControllerWithType:dataController:;
+ (BOOL)isNewFeedVC;
@end
