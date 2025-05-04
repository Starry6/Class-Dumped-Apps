@interface AWEHPEdgeBackConfig : MTLModel
@property (nonatomic) BOOL enable;
@property (nonatomic) double edgeWidth;
@property (nonatomic) NSDictionary enablePages;
@property (nonatomic) NSDictionary forbidPages;
@property (nonatomic) BOOL enableAllPages;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)edgeWidth;
- (void)setEdgeWidth:;
- (id)enablePages;
- (void)setEnablePages:;
- (id)forbidPages;
- (void)setForbidPages:;
- (BOOL)enableAllPages;
- (void)setEnableAllPages:;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setEnable:;
+ (id)JSONKeyPathsByPropertyKey;
@end
