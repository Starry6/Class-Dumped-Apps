@interface SFFormAutoFillFrame : NSObject
@property (nonatomic) WKWebProcessPlugInFrame plugInFrame;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)containsAnyFormElements;
- (unsigned long long)hash;
- (id)committedURL;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithWebProcessPlugInFrame:;
- (id)frameRef;
- (id)jsContextForMetadataControllerScriptWorld;
- (id)jsWrapperInMetadataControllerScriptWorldForNode:;
- (void)enumerateChildFramesUsingBlock:;
- (id)pageMainFrame;
- (id)_pageContoller;
- (id)_formMetadataController;
- (id)plugInFrame;
+ (id)autoFillFrameWithWebProcessPlugInFrame:;
@end
