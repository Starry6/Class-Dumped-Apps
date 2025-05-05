@interface WBSFaviconResponse : WBSSiteMetadataResponse
@property (nonatomic) UIImage favicon;
@property (nonatomic) Q faviconType;
@property (nonatomic) UIImage icon;
@property (nonatomic) BOOL generated;
@property (nonatomic) UIColor extractedBackgroundColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithURL:;
- (id)icon;
- (void).cxx_destruct;
- (id)initWithURL:favicon:faviconType:;
- (id)favicon;
- (unsigned long long)faviconType;
@end
