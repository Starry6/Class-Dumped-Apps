@interface AWEFavoriteLongPressConfig : NSObject
@property (nonatomic) UIView targetView;
@property (nonatomic) UIView alignView;
@property (nonatomic) UIView interactionContainer;
@property (nonatomic) <AWEInteractionElementLongPressProtocol> longPressGestureManager;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSDictionary contextDict;
@property (nonatomic) BOOL isStatusChanged;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) @? completion;
- (void)setEnterFrom:;
- (id)contextDict;
- (void)setContextDict:;
- (id)enterFrom;
- (id)interactionContainer;
- (void)setInteractionContainer:;
- (id)longPressGestureManager;
- (id)alignView;
- (void)setAlignView:;
- (void)setLongPressGestureManager:;
- (BOOL)isStatusChanged;
- (void)setIsStatusChanged:;
- (void)setModel:;
- (id)completion;
- (void)setCompletion:;
- (id)targetView;
- (id)model;
- (void)setTargetView:;
- (void).cxx_destruct;
@end
