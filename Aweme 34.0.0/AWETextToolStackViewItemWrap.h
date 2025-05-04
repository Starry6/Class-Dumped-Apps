@interface AWETextToolStackViewItemWrap : NSObject
@property (nonatomic) NSString itemIdentity;
@property (nonatomic) ACCAnimatedButton itemView;
@property (nonatomic) UIImageView starView;
@property (nonatomic) BOOL hasStarShine;
@property (nonatomic) @? configProvider;
@property (nonatomic) @? clickHandler;
@property (nonatomic) AWETextStackViewItemConfig itemConfig;
@property (nonatomic) q index;
- (id)clickHandler;
- (id)starView;
- (void)setStarView:;
- (void)setItemConfig:;
- (id)itemConfig;
- (void)setClickHandler:;
- (BOOL)hasStarShine;
- (void)setHasStarShine:;
- (id)itemIdentity;
- (void)setItemIdentity:;
- (void)setIndex:;
- (long long)index;
- (void)setConfigProvider:;
- (void).cxx_destruct;
- (id)configProvider;
- (id)itemView;
- (void)setItemView:;
@end
