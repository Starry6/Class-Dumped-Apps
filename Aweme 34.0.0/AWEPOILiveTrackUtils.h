@interface AWEPOILiveTrackUtils : NSObject
@property (nonatomic) NSDictionary awemeInfo;
@property (nonatomic) NSDictionary liveRoomInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeInfo;
- (void)setAwemeInfo:;
- (id)liveRoomInfo;
- (void)setLiveRoomInfo:;
- (id)lifeInitialInfo;
- (id)logExtraTrackKey;
- (id)cidTrackKey;
- (void)updateAwemeInfo:liveInfo:;
- (id)addLiveInfo:toLifeExtraInfo:;
- (id)sourceTrackParams;
- (id)sourceTrackParamsWithScene:enterMethod:;
- (id)p_liveRoomInfoAndADInfoDict;
- (void).cxx_destruct;
+ (id)sharedUtils;
@end
