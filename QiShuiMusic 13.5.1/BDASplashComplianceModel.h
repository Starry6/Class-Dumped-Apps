@interface BDASplashComplianceModel : NSObject
@property (nonatomic) q style;
@property (nonatomic) q slideDirection;
@property (nonatomic) q complianceType;
@property (nonatomic) NSDictionary complianceArea;
- (id)complianceArea;
- (long long)complianceType;
- (void)downloadResourceDownloadBlock:;
- (id)getLiveText:;
- (id)getModelClassString;
- (void)setComplianceArea:;
- (void)setComplianceType:;
- (void)setSlideDirection:;
- (id)setupSlideDistanceWithDictionary:;
- (long long)slideDirection;
- (id)initWithDictionary:;
- (void)setStyle:;
- (void).cxx_destruct;
- (long long)style;
@end
