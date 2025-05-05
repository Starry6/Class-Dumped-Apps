@interface IESLiveTimeServiceImpl : NSObject
@property (nonatomic) double deltaTime;
@property (nonatomic) double clientLatesEnterRoomTimestamp;
@property (nonatomic) double clientLatesEnterRoomSuccessTimestamp;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)clientLatesEnterRoomSuccessTimestamp;
- (double)clientLatesEnterRoomTimestamp;
- (double)latesEnterRoomTimestamp;
- (void)recordEnterRoomTimestamp;
- (void)setClientLatesEnterRoomSuccessTimestamp:;
- (void)setClientLatesEnterRoomTimestamp:;
- (void)updateServerTime:;
- (double)deltaTime;
- (void)setDeltaTime:;
- (double)nowInSeconds;
+ (id)shared;
@end
