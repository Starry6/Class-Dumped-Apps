@interface SFClipLinkBanner : SFLinkBanner
@property (nonatomic) SFClipLink clipLink;
@property (nonatomic) <SFAppSuggestionBannerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)overlayProvider;
- (id)_initWithClipLink:openActionHandler:;
- (id)clipLink;
+ (void)getClipLinkBannerForClipLink:openActionHandler:completionHandler:;
@end
