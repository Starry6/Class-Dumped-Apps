@interface TTDownloadTaskExtendConfig : JSONModel
@property (nonatomic) NSString etag;
@property (nonatomic) NSString lastModifiedTime;
@property (nonatomic) NSString maxAgeTime;
@property (nonatomic) NSString startDownloadTime;
@property (nonatomic) NSString componentId;
- (void)setComponentId:;
- (id)componentId;
- (id)maxAgeTime;
- (void)setLastModifiedTime:;
- (void)setMaxAgeTime:;
- (void)setStartDownloadTime:;
- (id)startDownloadTime;
- (void)updateConfig:lastModified:etag:startDownloadTime:componentId:;
- (void)dealloc;
- (id)etag;
- (void).cxx_destruct;
- (void)setEtag:;
- (id)lastModifiedTime;
+ (BOOL)propertyIsOptional:;
@end
