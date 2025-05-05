@interface CNVCard30PHOTOHelper : NSObject
@property (nonatomic) <CNVCardPerson> person;
@property (nonatomic) CNVCardWritingOptions options;
@property (nonatomic) Q maxBytes;
- (id)init;
- (id)options;
- (void).cxx_destruct;
- (id)person;
- (id)description;
- (id)image;
- (id)largeImage;
- (unsigned long long)maxBytes;
- (id)initWithPerson:options:maximumDataLength:;
- (id)bestEffortImage;
- (id)scaleImage:toFitSizes:allowableCompressionQuality:;
- (id)scaleImage:toFit:allowableCompressionQuality:;
- (id)compressImage:allowableCompressions:;
- (void)logBestEfforImageIfNonNil:;
+ (id)log;
@end
