@interface AWESearchToFeedDetailPageHelper : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)searchVideoFeedTableViewControllerWithDataController:initialIndex:referString:enterFrom:logExtraDict:;
- (id)getDetailTableViewControllerWithDataController:initialIndex:referString:enterFrom:logExtraDict:dataControllerChangedBlock:;
- (id)relatedDetailViewControllerWithModel:params:;
- (id)getHotSpotVCWithDataArray:initialIndex:referString:otherParams:;
- (id)aweMixPanelDetailTableViewContainerControllerWithDataController:initialIndex:referString:logExtraDict:;
- (id)aweMixPanelDetailTableViewControllerWithDataController:initialIndex:referString:logExtraDict:;
- (BOOL)isNeedNewEntrance;
- (void)enterAdMixVideoDetailTableVCWithAweme:DetailTableVC:;
@end
