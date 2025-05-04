@interface AWEIMLynxDynamicCardContentProps : AWEIMUIViewPresenterProps
@property (nonatomic) NSString lynxURL;
@property (nonatomic) NSString fallbackURL;
@property (nonatomic) {CGSize=dd} preferredLynxViewSize;
@property (nonatomic) q containerType;
@property (nonatomic) @? didUpdateCellContentSizeBlock;
- (void)setLynxURL:;
- (id)lynxURL;
- (id)didUpdateCellContentSizeBlock;
- (void)setDidUpdateCellContentSizeBlock:;
- (void)setPreferredLynxViewSize:;
- (id)preferredLynxViewSize;
- (void).cxx_destruct;
- (id)fallbackURL;
- (long long)containerType;
- (void)setContainerType:;
- (void)setFallbackURL:;
@end
