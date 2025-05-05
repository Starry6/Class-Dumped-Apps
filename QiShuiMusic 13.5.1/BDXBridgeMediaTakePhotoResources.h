@interface BDXBridgeMediaTakePhotoResources : BDXBridgeModel
@property (nonatomic) NSString resource_id;
@property (nonatomic) NSString thumb_base64_data;
@property (nonatomic) NSNumber width;
@property (nonatomic) NSNumber height;
@property (nonatomic) NSNumber fileSize;
- (void)setResource_id:;
- (id)resource_id;
- (void)setThumb_base64_data:;
- (id)thumb_base64_data;
- (id)fileSize;
- (void)setWidth:;
- (id)height;
- (id)width;
- (void)setFileSize:;
- (void)setHeight:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
