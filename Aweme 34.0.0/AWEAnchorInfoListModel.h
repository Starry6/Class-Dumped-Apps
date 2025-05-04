@interface AWEAnchorInfoListModel : MTLModel
@property (nonatomic) NSArray anchorsInfo;
@property (nonatomic) NSString style;
@property (nonatomic) NSString extra;
@property (nonatomic) NSString logExtra;
@property (nonatomic) BOOL filtered;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (void)setLogExtra:;
- (id)logExtra;
- (id)anchorsInfo;
- (void)setAnchorsInfo:;
- (id)extra;
- (void)setFiltered:;
- (id)style;
- (void).cxx_destruct;
- (void)setStyle:;
- (BOOL)filtered;
+ (id)anchorsInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
