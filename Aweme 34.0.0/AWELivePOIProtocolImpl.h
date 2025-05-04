@interface AWELivePOIProtocolImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createLiveLocationViewContainerWithScene:params:poiIDDidChangeBlock:didDismissBlock:;
- (id)createLiveLocationManagerViewControllerWithScene:viewControllerWillHideBlock:poiIDDidChangeBlock:roomID:anchorID:poiID:fetchRoomRelatedPOI:liveEnterFrom:;
- (id)currentLocationCityCode;
@end
