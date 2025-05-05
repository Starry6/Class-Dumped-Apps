@interface BDWebImageCloudControl : BDWebImageBaseControl
@property (nonatomic) BDWebImageCloudConfig infoConfig;
- (Class)infoConfigClass;
- (id)boeDomain;
- (id)cnDomain;
- (id)headerFieldsWithStartUpConfig:;
- (Class)mappingClass;
- (BOOL)processingNetObj:;
- (id)queryStringWithStartUpConfig:;
- (id)sgDomain;
- (id)vaDomain;
- (id)fileName;
@end
