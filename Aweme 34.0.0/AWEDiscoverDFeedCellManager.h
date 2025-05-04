@interface AWEDiscoverDFeedCellManager : NSObject
+ (void)registerCellForTableView:;
+ (id)cellIdentifyForModel:;
+ (id)viewControllerForModel:;
+ (id)identifierAndCellClassName;
+ (id)cardManagerForModel:;
@end
