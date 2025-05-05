@interface IESLiveSaaSFeedDrawerViewControllerContext : NSObject
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) BOOL isFromNearbyTV;
@property (nonatomic) NSString nearbyCityCode;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) HTSEventContext originTrackContext;
@property (nonatomic) BOOL isVSSportDrawer;
@property (nonatomic) IESLiveSaaSLiveRoomModel currentRoomData;
- (id)currentRoomData;
- (BOOL)isVSSportDrawer;
- (void)setEnterMethod:;
- (id)enterFrom;
- (id)enterMethod;
- (BOOL)isFromNearbyTV;
- (id)nearbyCityCode;
- (id)originTrackContext;
- (void)setCurrentRoomData:;
- (void)setEnterFrom:;
- (void)setIsFromNearbyTV:;
- (void)setIsVSSportDrawer:;
- (void)setNearbyCityCode:;
- (void)setOriginTrackContext:;
- (void)setTrackContext:;
- (id)trackContext;
- (void).cxx_destruct;
@end
