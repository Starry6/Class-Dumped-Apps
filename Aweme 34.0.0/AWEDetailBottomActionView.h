@interface AWEDetailBottomActionView : UIView
@property (nonatomic) AWEDetailUnifyCollectionButton collectionButton;
@property (nonatomic) NSMutableDictionary buttonKeyDict;
@property (nonatomic) NSMutableArray buttons;
@property (nonatomic) NSArray configs;
- (void)setCollectionButton:;
- (id)collectionButton;
- (void)setConfigs:;
- (void)setButtonKeyDict:;
- (void)resetUIWithConfigs:;
- (id)buttonKeyDict;
- (id)collectButtonWithConfig:;
- (unsigned long long)duxButtonStyleFromColorStyle:;
- (id)buttonWithKey:;
- (void)updateUIWithConfig:button:;
- (void)updateUIWithConfig:;
- (void)updateUIWithConfig:index:;
- (id)init;
- (id)initWithConfig:;
- (void)setButtons:;
- (id)buttons;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithConfigs:;
- (id)configs;
@end
