@interface CKTapToRadarRequest : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString radarDescription;
@property (nonatomic) NSString uuid;
@property (nonatomic) NSString componentName;
@property (nonatomic) NSString componentVersion;
@property (nonatomic) NSString componentID;
@property (nonatomic) NSString relatedRadar;
- (id)componentName;
- (id)uuid;
- (void)setUuid:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)radarDescription;
- (void)setRadarDescription:;
- (void)setComponentName:;
- (id)componentVersion;
- (void)setComponentVersion:;
- (id)componentID;
- (void)setComponentID:;
- (id)relatedRadar;
- (void)setRelatedRadar:;
@end
