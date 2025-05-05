@interface FigCaptureDeferredPhotoProcessorRequest : NSObject
@property (nonatomic) NSString applicationID;
@property (nonatomic) NSString captureRequestIdentifier;
@property (nonatomic) NSString photoIdentifier;
@property (nonatomic) FigCaptureDeferredPhotoProcessorRequest parent;
- (id)applicationID;
- (void)dealloc;
- (id)photoIdentifier;
- (unsigned long long)hash;
- (id)description;
- (id)parent;
- (id)captureRequestIdentifier;
- (BOOL)isEqual:;
- (id)initWithApplicationID:captureRequstIdentifier:photoIdentifier:message:parent:;
@end
