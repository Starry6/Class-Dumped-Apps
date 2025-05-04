@interface AWEPOIService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)POISessionManager;
- (double)filterListCellHeightForPOIModel:;
- (Class)POIUtils;
- (id)cityManagerWithPageType:;
- (id)cityManagerWithPageType:channelPageType:;
- (id)liveTrackManager;
- (id)publishAnchorManager;
- (id)interactionElementManager;
- (id)cityManager;
@end
