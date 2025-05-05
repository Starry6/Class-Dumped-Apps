@interface IESECGoodsFeedCommonGirdleRightComponent : NSObject
@property (nonatomic) UIView view;
@property (nonatomic) @? updateBlock;
@property (nonatomic) @? layoutBlock;
- (void)setLayoutBlock:;
- (void)updateWithParameters:;
- (id)updateBlock;
- (id)view;
- (void)layout;
- (void).cxx_destruct;
- (void)setView:;
- (void)setUpdateBlock:;
- (id)layoutBlock;
+ (id)componentWithView:layoutBlock:updateBlock:;
@end
