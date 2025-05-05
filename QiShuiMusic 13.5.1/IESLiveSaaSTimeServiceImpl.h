@interface IESLiveSaaSTimeServiceImpl : NSObject
@property (nonatomic) double deltaTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)latesEnterRoomTimestamp;
- (void)recordEnterRoomTimestamp;
- (void)updateServerTime:;
- (double)deltaTime;
- (void)setDeltaTime:;
- (double)nowInSeconds;
+ (id)shared;
@end
