@interface AMapLogCloudAdapter : AMapCloudConfig
@property (nonatomic) NSDictionary cloudConfigConvertDic;
- (BOOL)logAble;
- (id)cloudConfigConvertDic;
- (BOOL)debugAndInfoUploadAble;
- (BOOL)debugAndInfoWriteAble;
- (BOOL)mobileUploadAble;
@end
