@interface ARModifiedImageData : ARImageData
@property (nonatomic) ARImageData originalImage;
@property (nonatomic) NSDictionary metaData;
- (void)setMetaData:;
- (id)initWithImageData:;
- (id)metaData;
- (void).cxx_destruct;
- (id)originalImage;
@end
