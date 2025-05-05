@interface AnnieSaveTemplateParamModel : IESLiveBridgeModel
@property (nonatomic) NSString schema;
@property (nonatomic) NSNumber width;
@property (nonatomic) NSNumber height;
@property (nonatomic) NSNumber timeout;
@property (nonatomic) NSDictionary initialProps;
@property (nonatomic) BOOL saveToAlbum;
@property (nonatomic) NSString filename;
@property (nonatomic) NSNumber quality;
- (void)setSaveToAlbum:;
- (id)initialProps;
- (BOOL)saveToAlbum;
- (void)setInitialProps:;
- (id)filename;
- (id)quality;
- (id)schema;
- (void)setQuality:;
- (void)setTimeout:;
- (void)setWidth:;
- (void)setFilename:;
- (void)setSchema:;
- (id)height;
- (id)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (id)timeout;
@end
