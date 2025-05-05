@interface ToygerBlob : ToygerBaseModel
@property (nonatomic) NSString blobVersion;
@property (nonatomic) NSMutableArray blobElem;
- (id)blobElem;
- (void)setBlobElem:;
- (id)init;
- (void).cxx_destruct;
- (void)setBlobVersion:;
- (id)blobVersion;
@end
