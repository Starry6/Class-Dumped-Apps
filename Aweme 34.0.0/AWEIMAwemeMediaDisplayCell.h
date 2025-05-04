@interface AWEIMAwemeMediaDisplayCell : UITableViewCell
@property (nonatomic) UIViewController<AWEIMAwemeMediaDisplayControllerProtocol> viewController;
@property (nonatomic) UIViewController parentVC;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtraParams:;
- (id)extraParams;
- (void)_removeChildVC;
- (void)_addChildVC;
- (id)makeChildVCWith:extraParams:;
- (void)setModel:;
- (void)dealloc;
- (id)viewController;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setViewController:;
- (id)parentVC;
- (void)setParentVC:;
+ (double)bottomOffset:;
@end
