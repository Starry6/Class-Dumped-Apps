@interface IESLiveApplyDetailFastMatchTopRightEntryView : UIView
@property (nonatomic) @? action;
@property (nonatomic) UILabel defaultLabel;
@property (nonatomic) IESLiveWebpLoadingView matchingView;
@property (nonatomic) UILabel matchingLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)markEmphasized:;
- (void)markMatching:;
- (id)matchingLabel;
- (id)matchingView;
- (void)p_tap;
- (void)setMatchingLabel:;
- (void)setMatchingView:;
- (id)initWithAction:;
- (id)action;
- (void)setAction:;
- (void).cxx_destruct;
- (id)defaultLabel;
- (void)setDefaultLabel:;
@end
