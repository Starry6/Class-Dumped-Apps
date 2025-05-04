@interface AWECommentSummaryTipsModel : AWEBaseApiModel
@property (nonatomic) q type;
@property (nonatomic) NSString content;
@property (nonatomic) NSString jumpText;
@property (nonatomic) NSString jumpURL;
@property (nonatomic) NSString lightIconURL;
@property (nonatomic) NSString darkIconURL;
@property (nonatomic) BOOL hasRedPoint;
@property (nonatomic) AWECommentSummaryTipsExtra extra;
- (void)setExtra:;
- (id)jumpURL;
- (id)jumpText;
- (void)setJumpURL:;
- (void)setJumpText:;
- (id)lightIconURL;
- (id)darkIconURL;
- (BOOL)hasRedPoint;
- (void)setLightIconURL:;
- (void)setDarkIconURL:;
- (void)setHasRedPoint:;
- (id)content;
- (id)extra;
- (long long)type;
- (void)setContent:;
- (void)setType:;
- (void).cxx_destruct;
+ (id)extraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
