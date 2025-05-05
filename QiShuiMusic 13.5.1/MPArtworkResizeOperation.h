@interface MPArtworkResizeOperation : NSOperation
@property (nonatomic) UIImage image;
@property (nonatomic) {CGSize=dd} scaledFittingSize;
@property (nonatomic) BOOL usesExactFittingSizeAsDestinationSize;
@property (nonatomic) UIImage resizedImage;
@property (nonatomic) NSError error;
@property (nonatomic) NSURL destinationURL;
@property (nonatomic) NSObject<OS_dispatch_group> operationGroup;
- (void)setImage:;
- (id)error;
- (id)destinationURL;
- (void)main;
- (id)operationGroup;
- (void).cxx_destruct;
- (id)scaledFittingSize;
- (id)image;
- (id)initWithImage:scaledFittingSize:;
- (id)initWithImage:scaledFittingSize:destinationURL:;
- (id)initWithImage:scaledFittingSize:useExactFittingSizeAsDestinationSize:destinationURL:;
- (id)_resizedScaledSizeForScaledImageSize:scaledFittingSize:;
- (id)resizedImage;
- (void)setScaledFittingSize:;
- (BOOL)usesExactFittingSizeAsDestinationSize;
- (void)setUsesExactFittingSizeAsDestinationSize:;
@end
