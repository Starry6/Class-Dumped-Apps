@interface VKCustomTileOverlayProviderData : NSObject
@property (nonatomic) <VKCustomTileOverlayProviderDelegate> delegate;
@property (nonatomic) I providerID;
@property (nonatomic) I tileSize;
@property (nonatomic) I minimumZ;
@property (nonatomic) I maximumZ;
@property (nonatomic) double alpha;
@property (nonatomic) Q desiredDisplayRate;
- (unsigned int)providerID;
- (void)setDelegate:;
- (void)setAlpha:;
- (unsigned int)tileSize;
- (double)alpha;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithProviderID:tileSize:minimumZ:maximumZ:;
- (void)setDesiredDisplayRate:;
- (unsigned long long)desiredDisplayRate;
- (unsigned int)minimumZ;
- (unsigned int)maximumZ;
@end
