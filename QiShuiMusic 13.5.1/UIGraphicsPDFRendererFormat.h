@interface UIGraphicsPDFRendererFormat : UIGraphicsRendererFormat
@property (nonatomic) NSURL outputURL;
@property (nonatomic) NSMutableData pdfData;
@property (nonatomic) NSDictionary documentInfo;
- (void)setDocumentInfo:;
- (void)setPdfData:;
- (void)setOutputURL:;
- (id)outputURL;
- (void).cxx_destruct;
- (id)pdfData;
- (id)documentInfo;
- (id)copyWithZone:;
@end
