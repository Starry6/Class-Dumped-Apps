@interface GEOStorefrontPresentationInfo : NSObject
@property (nonatomic) GEOStorefrontView closeUpView;
@property (nonatomic) GEOStorefrontView standOffView;
@property (nonatomic) NSURL overlayImageURL;
- (id)init;
- (id)closeUpView;
- (id)standOffView;
- (void).cxx_destruct;
- (id)initWithStorefrontPresentation:;
- (id)overlayImageURL;
@end
