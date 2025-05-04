@interface AWEVSTrackEventManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackVideoShow:enterFromMerge:enterMethod:actionType:extraParams:;
- (void)trackVideoWindowCardTrackType:enterFromMerge:enterMethod:actionType:extraParams:;
- (void)trackVideoShowEnterFromMerge:enterMethod:actionType:extraParams:;
- (void)trackVsAdEvent:Tag:refer:parmas:;
- (void)trackVideoWindowCard:trackType:enterFromMerge:enterMethod:actionType:extraParams:;
- (int)vsEpisodeTypeStr:;
- (int)vsEpisodeSubTypeStr:;
+ (id)sharedVSTracker;
@end
