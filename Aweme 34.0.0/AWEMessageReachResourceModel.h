@interface AWEMessageReachResourceModel : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) q count;
@property (nonatomic) NSArray images;
@property (nonatomic) BOOL autoSwitchTab;
@property (nonatomic) BOOL needCover;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)needCover;
- (void)setNeedCover:;
- (void)setAutoSwitchTab:;
- (BOOL)autoSwitchTab;
- (id)images;
- (void)setCount:;
- (void)setText:;
- (long long)count;
- (id)text;
- (void)setImages:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;
@end
