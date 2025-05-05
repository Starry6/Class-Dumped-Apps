@interface WBSTouchIconResponse : WBSSiteMetadataResponse
@property (nonatomic) UIImage touchIcon;
@property (nonatomic) UIColor extractedBackgroundColor;
@property (nonatomic) BOOL generated;
@property (nonatomic) UIImage icon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)touchIcon;
- (id)initWithURL:;
- (id)initWithURL:touchIcon:generated:extractedBackgroundColor:;
- (id)icon;
- (void).cxx_destruct;
- (BOOL)isGenerated;
- (id)description;
- (id)extractedBackgroundColor;
+ (id)responseWithURL:touchIcon:generated:extractedBackgroundColor:;
@end
