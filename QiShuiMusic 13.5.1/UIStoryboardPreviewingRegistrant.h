@interface UIStoryboardPreviewingRegistrant : NSObject
@property (nonatomic) UIViewController viewController;
@property (nonatomic) UIView sourceView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSourceView:;
- (void)setViewController:;
- (id)sourceView;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)viewController;
- (void)previewingContext:commitViewController:;
- (void).cxx_destruct;
- (id)previewingContext:viewControllerForLocation:;
- (void)registerForPreviewing;
- (void)unregisterForPreviewing;
@end
