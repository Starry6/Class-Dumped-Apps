@interface IESLiveSaaSLiveStatusCheckingItem : NSObject
@property (nonatomic) NSString userID;
@property (nonatomic) q scene;
@property (nonatomic) NSNumber roomID;
@property (nonatomic) NSString logID;
@property (nonatomic) double timestamp;
- (id)userID;
- (void)setScene:;
- (long long)scene;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
- (void)setUserID:;
- (id)roomID;
- (void)setRoomID:;
- (id)logID;
- (void)setLogID:;
@end
