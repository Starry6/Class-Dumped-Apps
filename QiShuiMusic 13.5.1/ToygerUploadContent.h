@interface ToygerUploadContent : ToygerBaseModel
@property (nonatomic) ToygerMeta meta;
@property (nonatomic) ToygerBlob blob;
- (id)uploadData;
- (id)uploadString;
- (id)meta;
- (id)init;
- (void)setMeta:;
- (void).cxx_destruct;
- (void)setBlob:;
- (id)blob;
@end
