@interface IESLiveSaaSNewDataSyncAnonymousSubscriber : NSObject
@property (nonatomic) @? completion;
@property (nonatomic) NSString syncKey;
@property (nonatomic) BOOL isCompleted;
@property (nonatomic) double realWaitTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithKey:completion:;
- (double)realWaitTime;
- (void)setRealWaitTime:;
- (void)subscribedKey:withValue:version:;
- (void)subscribedKeyUpdated:withValue:oldVersion:newVersion:;
- (void)subscribedSyncDataUpdatedWithValue:oldVersion:newVersion:;
- (void)subscribedSyncDataWithValue:version:;
- (void)toldTimeout;
- (void)trackWaitTime:;
- (id)completion;
- (void)setCompletion:;
- (BOOL)isCompleted;
- (void).cxx_destruct;
- (id)syncKey;
- (void)setIsCompleted:;
- (void)setSyncKey:;
@end
