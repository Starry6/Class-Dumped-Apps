@interface IESECGoodsDetailBaseComponentView : UIView
@property (nonatomic) IESECGoodsDetailParameters parameters;
@property (nonatomic) q viewStyle;
@property (nonatomic) IESECGoodsDetailTracker tracker;
@property (nonatomic) <IESECGoodsDetailInfoViewEventDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithParameters:style:tracker:;
- (void)updateWithParameters:;
- (id)tracker;
- (void)setDelegate:;
- (long long)viewStyle;
- (id)parameters;
- (id)delegate;
- (void).cxx_destruct;
- (void)setParameters:;
- (void)setViewStyle:;
+ (double)componentViewHeight:style:;
+ (BOOL)componentViewShouldShow:style:;
@end
