@interface LPARAsset : NSObject
@property (nonatomic) NSURL fileURL;
@property (nonatomic) NSData data;
@property (nonatomic) NSString MIMEType;
@property (nonatomic) LPARAssetProperties properties;
- (void)setFileURL:;
- (id)data;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)properties;
- (void).cxx_destruct;
- (id)fileURL;
- (BOOL)isEqual:;
- (id)MIMEType;
- (id)initWithData:MIMEType:properties:;
- (id)initByReferencingFileURL:MIMEType:properties:;
- (void)_mapDataFromFileURL;
- (unsigned long long)_encodedSize;
- (BOOL)_isSubstitute;
- (id)_initWithARAsset:;
- (id)_createTemporaryFileAndWriteData;
- (id)_ensureTemporaryAssetURL;
+ (BOOL)supportsSecureCoding;
@end
