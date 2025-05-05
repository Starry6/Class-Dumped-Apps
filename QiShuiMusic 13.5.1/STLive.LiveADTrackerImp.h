@interface STLive.LiveADTrackerImp : NSObject
@property (nonatomic) NSNumber adRoomID;
@property (nonatomic) NSDictionary adExtraParams;
- (id)adExtraParams;
- (id)adRoomID;
- (BOOL)isADRoom;
- (void)sendTrackURLWithParams:;
- (void)setAdExtraParams:;
- (void)setAdRoomID:;
- (void)trackWithLabel:extra:;
- (void)trackWithParams:;
- (void)trackWithRoom:label:extra:;
- (id)init;
- (void).cxx_destruct;
@end
