@interface DouyinOpenSDKShareLink : NSObject
@property (nonatomic) NSString linkTitle;
@property (nonatomic) NSString linkDescription;
@property (nonatomic) NSString linkURLString;
@property (nonatomic) NSString linkCoverURLString;
- (id)linkDescription;
- (id)linkCoverURLString;
- (id)linkURLString;
- (void)setLinkCoverURLString:;
- (void)setLinkDescription:;
- (void)setLinkURLString:;
- (void).cxx_destruct;
- (id)linkTitle;
- (void)setLinkTitle:;
@end
