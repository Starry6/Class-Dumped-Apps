@interface WBSKnownTrackerFilter : NSObject
- (void)getKnownTrackersFromHighLevelDomains:completionHandler:;
- (id)_createKnownTrackersDictionary;
@end
