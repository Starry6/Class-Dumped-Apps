@interface AWEAdSearchKVAbstractView : UIView
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) @? trackSearchResultClickBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)updateWithAweme:;
- (void)kvAbstractViewTapped:;
- (id)trackSearchResultClickBlock;
- (id)createLabelWith:;
- (void)setTrackSearchResultClickBlock:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
