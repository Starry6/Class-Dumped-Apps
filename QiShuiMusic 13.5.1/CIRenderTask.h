@interface CIRenderTask : NSObject
- (id)init;
- (void)dealloc;
- (id)initWithInternalTask:;
- (id)internalRepresentation;
- (id)_pdfDataRepresentation;
- (id)waitUntilCompletedAndReturnError:;
+ (id)rendertaskWithInternalTask:;
@end
