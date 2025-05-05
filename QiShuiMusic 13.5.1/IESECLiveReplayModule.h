@interface IESECLiveReplayModule : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)createDataStoreIfNeeded:replayData:extraParams:trackParams:;
+ (id)interactionViewWithDataStore:;
@end
