@interface VKRecognizedText : VKRecognizedItem
@property (nonatomic) VNRecognizedTextObservation observation;
@property (nonatomic) NSString transcript;
- (void).cxx_destruct;
- (id)description;
- (id)observation;
- (id)transcript;
- (BOOL)shouldAssociateWithItem:;
- (void)associateWithItem:;
- (id)initWithFrameInfo:textBlockObservation:;
@end
