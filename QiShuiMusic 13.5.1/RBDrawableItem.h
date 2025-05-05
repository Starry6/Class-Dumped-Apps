@interface RBDrawableItem : NSObject
@property (nonatomic) RBDisplayList displayList;
@property (nonatomic) {?=QQQQ} sourceRect;
@property (nonatomic) {?=QQQ} destinationOffset;
@property (nonatomic) NSInteger initialState;
@property (nonatomic) {?=ffff} clearColor;
- (id)sourceRect;
- (void)setSourceRect:;
- (id)clearColor;
- (void)setClearColor:;
- (void)setInitialState:;
- (int)initialState;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)destinationOffset;
- (void)setDestinationOffset:;
- (void)setDisplayList:;
- (id)displayList;
@end
