@interface PLImageContainer : NSObject
@property (nonatomic) {CGSize=dd} pixelSize;
@property (nonatomic) ^{CGImage=} CGImage;
@property (nonatomic) NSData data;
@property (nonatomic) NSString uniformTypeIdentifier;
@property (nonatomic) ^v ioSurface;
@property (nonatomic) NSArray auxiliaryImageRecords;
- (id)pixelSize;
- (void)dealloc;
- (id)uniformTypeIdentifier;
- (id)data;
- (id)CGImage;
- (id)auxiliaryImageRecords;
- (id)initWithPLImage:;
- (id)initWithCGImage:;
- (id)initWithCGImage:ioSurface:CIImage:backingData:uniformTypeIdentifier:size:auxiliaryImageRecords:;
- (id)initWithIOSurface:;
- (BOOL)hasAuxiliaryImages;
- (void).cxx_destruct;
- (id)description;
- (id)ioSurface;
- (id)initWithPLImage:backingData:uniformTypeIdentifier:auxiliaryImageRecords:;
@end
