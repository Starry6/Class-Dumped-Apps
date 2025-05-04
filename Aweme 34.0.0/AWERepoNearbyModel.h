@interface AWERepoNearbyModel : NSObject
@property (nonatomic) BOOL poiFootprintVideo;
@property (nonatomic) NSNumber publishToNearbyPrivacyType;
@property (nonatomic) BOOL comeFromNearby;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)poiFootprintVideo;
- (void)setPoiFootprintVideo:;
- (id)acc_publishRequestParams:;
- (id)initWithDraft:;
- (void)saveWithDraft:;
- (id)acc_footprintAnchorID;
- (long long)acc_footprintAnchorBusinessType;
- (BOOL)comeFromNearby;
- (id)publishToNearbyPrivacyType;
- (void)setPublishToNearbyPrivacyType:;
- (void)configModelForQuikStoryBeforePublish:;
- (void)setComeFromNearby:;
- (BOOL)enablePreferPopup;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)updateWithModel:;
+ (id)repo_dataProtocol;
@end
