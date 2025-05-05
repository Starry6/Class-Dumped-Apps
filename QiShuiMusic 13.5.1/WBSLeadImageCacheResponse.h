@interface WBSLeadImageCacheResponse : WBSSiteMetadataResponse
@property (nonatomic) UIImage thumbnail;
- (id)initWithURL:;
- (id)thumbnail;
- (void).cxx_destruct;
- (id)initWithURL:thumbnail:;
+ (id)responseWithURL:thumbnail:;
@end
