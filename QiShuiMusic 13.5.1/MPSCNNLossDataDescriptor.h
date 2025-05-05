@interface MPSCNNLossDataDescriptor : NSObject
@property (nonatomic) Q layout;
@property (nonatomic) {?=QQQ} size;
@property (nonatomic) Q bytesPerRow;
@property (nonatomic) Q bytesPerImage;
- (void)dealloc;
- (id)debugDescription;
- (unsigned long long)layout;
- (id)copyWithZone:;
- (id)size;
- (unsigned long long)bytesPerRow;
- (void)setBytesPerRow:;
- (unsigned long long)bytesPerImage;
- (void)setBytesPerImage:;
+ (id)cnnLossDataDescriptorWithData:layout:size:;
@end
