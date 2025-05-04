@interface AWETransformerPOIStoreCardAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transformToJSONObjectFrom:topMargin:bottomMargin:response:;
- (id)__poiHeaderElementWithCardData:response:;
- (id)__poiBottomElementWithCardData:response:;
- (id)__backgroundImageURLString;
- (id)__showEventWithCardData:response:;
- (id)__clickEventWithCardData:response:actionType:isJumpToNearby:isJumpToPOIDetail:;
- (id)__arrowURLString;
- (id)__freshTranformerTrackWithCardData:response:eventName:;
- (id)__poiCardTrackWithCardData:response:eventName:actionType:;
- (id)__jumpToNearbyEventWithCardData:reponse:;
- (id)__jumpToPOIDetailEventWithCardData:actionType:;
- (id)__transformerSettings;
@end
