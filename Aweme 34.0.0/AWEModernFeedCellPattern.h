@interface AWEModernFeedCellPattern : NSObject
@property (nonatomic) NSString controllerClassName;
@property (nonatomic) NSString cellType;
@property (nonatomic) BOOL isStatic;
@property (nonatomic) @? itemPredicateBlock;
@property (nonatomic) @? cellTypeBlock;
- (id)controllerClassName;
- (void)setControllerClassName:;
- (id)itemPredicateBlock;
- (void)setItemPredicateBlock:;
- (id)cellTypeBlock;
- (void)setCellTypeBlock:;
- (id)cellType;
- (void)setCellType:;
- (void).cxx_destruct;
- (BOOL)isStatic;
- (void)setIsStatic:;
@end
