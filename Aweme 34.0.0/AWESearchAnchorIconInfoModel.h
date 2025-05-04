@interface AWESearchAnchorIconInfoModel : MTLModel
@property (nonatomic) NSString uri;
@property (nonatomic) NSString arrowUri;
@property (nonatomic) NSString width;
@property (nonatomic) NSString height;
@property (nonatomic) NSString text;
@property (nonatomic) NSString textColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)arrowUri;
- (void)setArrowUri:;
- (void)setHeight:;
- (void)setWidth:;
- (void)setText:;
- (id)text;
- (void)setTextColor:;
- (id)uri;
- (id)width;
- (void)setUri:;
- (void).cxx_destruct;
- (id)height;
- (id)textColor;
+ (id)JSONKeyPathsByPropertyKey;
@end
