@interface AWESearchAIGCImageSelectionContainerConfig : NSObject
@property (nonatomic) BOOL isSmallType;
@property (nonatomic) BOOL enableClickSelection;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} containerBounds;
@property (nonatomic) NSArray boxArray;
@property (nonatomic) q selectedIndex;
- (id)boxArray;
- (void)setBoxArray:;
- (void)setIsSmallType:;
- (void)setEnableClickSelection:;
- (BOOL)isSmallType;
- (BOOL)enableClickSelection;
- (void)setSelectedIndex:;
- (void)setContainerBounds:;
- (long long)selectedIndex;
- (void).cxx_destruct;
- (id)containerBounds;
@end
