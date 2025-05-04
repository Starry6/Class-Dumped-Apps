@interface AWEPOILiveRoomModel : NSObject
@property (nonatomic) NSString poiID;
@property (nonatomic) NSString roomID;
@property (nonatomic) NSString anchorID;
@property (nonatomic) NSString liveRoomEnterFrom;
@property (nonatomic) Q bindState;
- (id)anchorID;
- (id)poiID;
- (void)setAnchorID:;
- (void)setPoiID:;
- (void)setPOI:;
- (void)setBindState:;
- (void)setLiveRoomEnterFrom:;
- (unsigned long long)bindState;
- (id)liveRoomEnterFrom;
- (id)roomID;
- (void).cxx_destruct;
- (void)setRoomID:;
@end
