@interface AWEHPPinTopUIModifyModel : NSObject
@property (nonatomic) NSString primaryButtonText;
@property (nonatomic) NSString secondaryButtonText;
@property (nonatomic) NSString content;
@property (nonatomic) NSString subContent;
@property (nonatomic) NSAttributedString attributeContent;
@property (nonatomic) NSString headerURL;
@property (nonatomic) <AWEHPPinTopBusinessUIConfigProtocol> headerViewConfig;
- (id)subContent;
- (void)setSubContent:;
- (void)setAttributeContent:;
- (void)setHeaderViewConfig:;
- (id)attributeContent;
- (id)headerURL;
- (void)setHeaderURL:;
- (id)headerViewConfig;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)primaryButtonText;
- (id)secondaryButtonText;
- (void)setPrimaryButtonText:;
- (void)setSecondaryButtonText:;
@end
