@interface AWEPOIUGCCommentModel : NSObject
@property (nonatomic) q order;
@property (nonatomic) NSString rateID;
@property (nonatomic) NSArray materials;
@property (nonatomic) NSString rateViewRawData;
@property (nonatomic) NSDictionary trackParams;
- (id)trackParams;
- (void)setTrackParams:;
- (id)rateViewRawData;
- (id)rateID;
- (void)setRateID:;
- (void)setRateViewRawData:;
- (long long)order;
- (id)materials;
- (void).cxx_destruct;
- (void)setOrder:;
- (void)setMaterials:;
+ (id)handleCommentList:selectedRateID:selectedIndex:thumbnailImage:;
@end
