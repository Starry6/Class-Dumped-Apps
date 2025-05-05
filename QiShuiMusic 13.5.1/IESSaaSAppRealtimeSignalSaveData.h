@interface IESSaaSAppRealtimeSignalSaveData : MTLModel
@property (nonatomic) NSString roomID;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStartTime:;
- (double)startTime;
- (void)setDuration:;
- (void).cxx_destruct;
- (double)duration;
- (id)roomID;
- (void)setRoomID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
