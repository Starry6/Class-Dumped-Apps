@interface ICDocCamDocumentInfoCollection : NSObject
@property (nonatomic) q docCamPDFVersion;
@property (nonatomic) NSString title;
@property (nonatomic) NSDate creationDate;
@property (nonatomic) NSDate modificationDate;
@property (nonatomic) NSString uniqueIdentifier;
@property (nonatomic) NSMutableArray docInfos;
- (void)setUniqueIdentifier:;
- (id)init;
- (id)uniqueIdentifier;
- (void)setCreationDate:;
- (void)setModificationDate:;
- (id)modificationDate;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)bumpModificationDate;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)creationDate;
- (long long)docCamPDFVersion;
- (void)setDocInfos:;
- (id)docInfos;
+ (BOOL)supportsSecureCoding;
+ (id)infoCollectionWithArchivedDocumentCameraScanData:imageCache:error:;
@end
