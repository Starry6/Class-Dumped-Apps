@interface PKPaletteTapToRadarCommand : NSObject
@property (nonatomic) <PKPaletteTapToRadarCommandDelegate> delegate;
- (void)execute;
- (void)editingOverlayContainerDidChangeToSceneBounds:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
@end
