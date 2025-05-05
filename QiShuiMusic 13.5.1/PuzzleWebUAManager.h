@interface PuzzleWebUAManager : NSObject
+ (id)systemUserAgent;
+ (id)absoluteUserAgent;
+ (id)baseCustomUserAgent;
+ (id)defaultKVStore;
+ (id)didReceiveSystemUA:;
+ (id)fetchSystemUserAgent;
+ (id)forceFetchSystemUserAgent;
+ (id)hostUserAgent;
+ (id)uaRemoveBlankIfNeed:;
@end
