@interface PFAuxiliaryImageRecord : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSDictionary auxiliaryImageInfo;
@property (nonatomic) {CGSize=dd} sourceImageSize;
@property (nonatomic) I sourceImageOrientation;
- (id)identifier;
- (void).cxx_destruct;
- (void)setIdentifier:;
- (unsigned int)sourceImageOrientation;
- (id)auxiliaryImageInfo;
- (double)effectiveScaleFactorForDestinationImageSize:;
- (double)sourceImageSizeMaxLength;
- (void)setAuxiliaryImageInfo:;
- (id)sourceImageSize;
- (void)setSourceImageSize:;
- (void)setSourceImageOrientation:;
@end
