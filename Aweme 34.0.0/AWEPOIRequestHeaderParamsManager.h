@interface AWEPOIRequestHeaderParamsManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getLiveExplanationCardHeaderParams;
- (id)getLiveShareGetHeaderParams;
- (id)getMallFeedParams;
- (id)getMallHomePageParams;
- (id)getNearybyFeedParams;
- (id)getMallDiamondPositionParams;
- (id)getPoiDetailHeaderParams;
- (id)getProductDetailHeaderParams;
- (id)getLiveShelfHeaderParams;
- (id)getLiveCollectReturnHeaderParams;
- (id)getLiveAutoDrawHeaderParams;
+ (id)sharedManager;
@end
