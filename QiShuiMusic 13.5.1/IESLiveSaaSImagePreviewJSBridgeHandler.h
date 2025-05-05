@interface IESLiveSaaSImagePreviewJSBridgeHandler : NSObject
@property (nonatomic) IESLiveSaaSImagePreviewView previewView;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)previewImage:;
- (void)registerHandlerWithBridge:;
- (void)registerImagePreviewBridge:;
- (id)previewView;
- (void).cxx_destruct;
- (void)setPreviewView:;
@end
