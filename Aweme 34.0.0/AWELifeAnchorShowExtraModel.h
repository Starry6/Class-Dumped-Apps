@interface AWELifeAnchorShowExtraModel : MTLModel
@property (nonatomic) Q anchorType;
@property (nonatomic) BOOL shouldShow;
@property (nonatomic) BOOL hasAnchorInfo;
@property (nonatomic) NSString anchorNotShowReason;
@property (nonatomic) NSString commerceFilterReason;
@property (nonatomic) NSString extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (BOOL)hasAnchorInfo;
- (id)anchorNotShowReason;
- (void)setAnchorNotShowReason:;
- (id)commerceFilterReason;
- (void)setCommerceFilterReason:;
- (id)extra;
- (void).cxx_destruct;
- (unsigned long long)anchorType;
- (BOOL)shouldShow;
- (void)setAnchorType:;
- (void)setShouldShow:;
- (void)setHasAnchorInfo:;
+ (id)JSONKeyPathsByPropertyKey;
@end
