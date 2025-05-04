@interface AWERTVShowSecurityCallAlertLynxBridgeRequest : BDXBridgeModel
@property (nonatomic) NSString headerImageURLString;
@property (nonatomic) NSString content;
@property (nonatomic) NSString title;
@property (nonatomic) NSString confirmTitle;
@property (nonatomic) NSArray highlights;
- (id)confirmTitle;
- (void)setConfirmTitle:;
- (void)setHeaderImageURLString:;
- (id)headerImageURLString;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)title;
- (id)highlights;
- (void)setTitle:;
- (void)setHighlights:;
+ (id)JSONKeyPathsByPropertyKey;
@end
