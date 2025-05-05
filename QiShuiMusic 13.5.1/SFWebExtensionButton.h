@interface SFWebExtensionButton : NSObject
@property (nonatomic) WBSWebExtensionData extension;
@property (nonatomic) UIImage image;
@property (nonatomic) BOOL badged;
- (id)extension;
- (void).cxx_destruct;
- (id)image;
- (id)initWithExtension:image:badged:;
- (BOOL)badged;
@end
