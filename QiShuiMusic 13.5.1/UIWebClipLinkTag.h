@interface UIWebClipLinkTag : NSObject
@property (nonatomic) NSString href;
@property (nonatomic) NSURL hrefURL;
@property (nonatomic) NSString rel;
@property (nonatomic) NSString sizes;
@property (nonatomic) BOOL mediaMatchesPortraitOrientation;
@property (nonatomic) BOOL mediaMatchesLandscapeOrientation;
- (void)setHref:;
- (id)href;
- (id)sizes;
- (void).cxx_destruct;
- (id)hrefURL;
- (id)rel;
- (void)setRel:;
- (void)setSizes:;
- (BOOL)mediaMatchesPortraitOrientation;
- (void)setMediaMatchesPortraitOrientation:;
- (BOOL)mediaMatchesLandscapeOrientation;
- (void)setMediaMatchesLandscapeOrientation:;
@end
