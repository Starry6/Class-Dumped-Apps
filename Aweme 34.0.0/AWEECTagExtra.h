@interface AWEECTagExtra : MTLModel
@property (nonatomic) BOOL highlight;
@property (nonatomic) NSString text;
@property (nonatomic) NSString sort;
@property (nonatomic) NSString extra;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (id)sort;
- (void)setText:;
- (id)extra;
- (id)text;
- (void).cxx_destruct;
- (BOOL)highlight;
- (void)setHighlight:;
- (void)setSort:;
+ (id)highlightJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
