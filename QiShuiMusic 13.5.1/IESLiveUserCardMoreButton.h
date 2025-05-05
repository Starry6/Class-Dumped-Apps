@interface IESLiveUserCardMoreButton : IESLiveButton
@property (nonatomic) IESLiveUserCardStore store;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithStore:;
- (void)configWithTag:isShowWhite:;
- (void)setStore:;
- (void)layoutSubviews;
- (void)setup;
- (void).cxx_destruct;
- (id)store;
- (BOOL)shouldShow;
- (long long)configTag;
- (void)actionTapped;
@end
