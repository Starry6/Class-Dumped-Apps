@interface AWEMusicDetailInspirationModel : NSObject
@property (nonatomic) NSString inspirationID;
@property (nonatomic) NSString title;
@property (nonatomic) NSNumber userCount;
@property (nonatomic) NSString shootSameDescription;
@property (nonatomic) AWEURLModel coverURL;
@property (nonatomic) q materialType;
@property (nonatomic) Q inspirationType;
@property (nonatomic) BOOL isDataAvailable;
@property (nonatomic) BOOL shouldShowQuickFlashRedEnvelopeGuide;
- (unsigned long long)inspirationType;
- (void)setInspirationType:;
- (id)shootSameDescription;
- (void)updateDataWithResponseModel:;
- (id)inspirationID;
- (void)setInspirationID:;
- (void)setShootSameDescription:;
- (BOOL)shouldShowQuickFlashRedEnvelopeGuide;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (long long)materialType;
- (void)setUserCount:;
- (id)userCount;
- (void)setMaterialType:;
- (BOOL)isDataAvailable;
- (id)coverURL;
- (void)setCoverURL:;
@end
