@interface IESECWinFeedMixItem : MTLModel
@property (nonatomic) Q itemType;
@property (nonatomic) IESECWinFeedProductModel feedProduct;
@property (nonatomic) IESECWinFeedVideoModel feedVideo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setFeedProduct:;
- (id)feedProduct;
- (id)feedVideo;
- (void)setFeedVideo:;
- (void)setItemType:;
- (unsigned long long)itemType;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
