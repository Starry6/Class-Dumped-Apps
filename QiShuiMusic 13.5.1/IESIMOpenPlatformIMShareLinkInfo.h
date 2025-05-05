@interface IESIMOpenPlatformIMShareLinkInfo : NSObject
@property (nonatomic) NSString link;
@property (nonatomic) NSString linkTitle;
@property (nonatomic) NSString linkDescription;
@property (nonatomic) NSString linkImageURL;
- (id)linkDescription;
- (id)linkImageURL;
- (void)setLinkDescription:;
- (void)setLinkImageURL:;
- (id)link;
- (void)setLink:;
- (void).cxx_destruct;
- (id)linkTitle;
- (void)setLinkTitle:;
@end
