@interface AWEFollowListEntranceContentModel : NSObject
@property (nonatomic) BOOL show;
@property (nonatomic) BOOL showBorder;
@property (nonatomic) NSString descText;
@property (nonatomic) NSString entranceText;
@property (nonatomic) @? onTapEntranceAction;
@property (nonatomic) @? onTapDescLabelAction;
@property (nonatomic) @? entranceShowAction;
- (id)descText;
- (void)setDescText:;
- (id)entranceText;
- (void)setEntranceText:;
- (id)onTapEntranceAction;
- (void)setOnTapEntranceAction:;
- (id)onTapDescLabelAction;
- (void)setOnTapDescLabelAction:;
- (id)entranceShowAction;
- (void)setEntranceShowAction:;
- (BOOL)show;
- (void).cxx_destruct;
- (void)setShow:;
- (void)setShowBorder:;
- (BOOL)showBorder;
@end
