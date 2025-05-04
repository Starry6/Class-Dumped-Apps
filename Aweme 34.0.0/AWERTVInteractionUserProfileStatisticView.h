@interface AWERTVInteractionUserProfileStatisticView : UIView
@property (nonatomic) NSString praise;
@property (nonatomic) NSString fans;
@property (nonatomic) NSString following;
@property (nonatomic) AWERTVInteractionUserProfileStatisticViewModel model;
- (void)renderModel:context:;
- (void)__setupViews;
- (id)praise;
- (void)setPraise:;
- (id)fans;
- (void)setFans:;
- (id)__createViewWithPrefix:text:;
- (void)setModel:;
- (id)model;
- (id)following;
- (void).cxx_destruct;
- (void)setFollowing:;
@end
