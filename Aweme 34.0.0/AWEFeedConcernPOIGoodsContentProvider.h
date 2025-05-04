@interface AWEFeedConcernPOIGoodsContentProvider : NSObject
@property (nonatomic) UIView<AWEFeedConcernPOIGoodsCardProtocol> contentView;
@property (nonatomic) @? createdBlock;
- (void)setCreatedBlock:;
- (id)createConcernPOIGoodsCardFromModel:;
- (id)createdBlock;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
@end
