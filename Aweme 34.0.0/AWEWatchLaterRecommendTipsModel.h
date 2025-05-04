@interface AWEWatchLaterRecommendTipsModel : MTLModel
@property (nonatomic) q type;
@property (nonatomic) q showTimeStamp;
@property (nonatomic) NSString text;
@property (nonatomic) NSString extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (void)setShowTimeStamp:;
- (long long)showTimeStamp;
- (void)setText:;
- (id)extra;
- (id)text;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
