@interface IESLiveSaaSFeedABManager : NSObject
- (id)channelIDForEnterType:;
- (int)drawerBroadcastEntranceType;
- (BOOL)enableRecForEmptySearch;
- (int)searchResultSlideType;
+ (id)managerWithDIContext:;
@end
