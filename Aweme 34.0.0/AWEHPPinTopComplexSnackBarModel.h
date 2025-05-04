@interface AWEHPPinTopComplexSnackBarModel : NSObject
@property (nonatomic) NSString primaryButtonText;
@property (nonatomic) NSString content;
@property (nonatomic) NSAttributedString attributeContent;
@property (nonatomic) NSString headerURL;
@property (nonatomic) <AWEHPPinTopBusinessUIConfigProtocol> headerViewConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAttributeContent:;
- (void)setHeaderViewConfig:;
- (id)pinTopUIType;
- (id)attributeContent;
- (id)headerURL;
- (void)setHeaderURL:;
- (id)headerViewConfig;
- (BOOL)isValidWithError:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)primaryButtonText;
- (void)setPrimaryButtonText:;
@end
