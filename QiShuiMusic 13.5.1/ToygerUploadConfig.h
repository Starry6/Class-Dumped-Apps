@interface ToygerUploadConfig : ToygerBaseModel
@property (nonatomic) NSString minquality;
@property (nonatomic) NSString upload_compress_rate;
@property (nonatomic) NSString mode;
@property (nonatomic) NSNumber desiredWidth;
@property (nonatomic) NSString log_classifier;
@property (nonatomic) NSArray collection;
- (id)log_classifier;
- (id)minquality;
- (void)setLog_classifier:;
- (void)setMinquality:;
- (void)setUpload_compress_rate:;
- (id)upload_compress_rate;
- (id)collection;
- (void)setCollection:;
- (id)init;
- (void).cxx_destruct;
- (id)mode;
- (void)setMode:;
- (id)desiredWidth;
- (void)setDesiredWidth:;
@end
