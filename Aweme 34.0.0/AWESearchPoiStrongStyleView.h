@interface AWESearchPoiStrongStyleView : UIView
@property (nonatomic) BOOL isQuality;
@property (nonatomic) AWEAnchorNormalInfoModel anchorModel;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel hasTailLabel;
@property (nonatomic) q hasTailLableWidth;
@property (nonatomic) q hasTailLableLength;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAnchorModel:;
- (id)anchorModel;
- (void)setupUIWithModel:;
- (void)setIsQuality:;
- (BOOL)isQuality;
- (void)reuseAnchor;
- (void)updateWithModel:isQuality:;
- (void)setHasTailLabel:;
- (void)setHasTailLableLength:;
- (void)setHasTailLableWidth:;
- (long long)hasTailLableLength;
- (long long)hasTailLableWidth;
- (id)hasTailLabel;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
@end
