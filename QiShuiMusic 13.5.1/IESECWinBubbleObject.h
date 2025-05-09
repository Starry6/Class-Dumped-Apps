@interface IESECWinBubbleObject : NSObject
@property (nonatomic) {UIEdgeInsets=dddd} edge;
@property (nonatomic) IESECWinHeaderBubbleModel bubble;
@property (nonatomic) Q splitConfigType;
@property (nonatomic) double stickyHeight;
@property (nonatomic) BOOL shouldSticky;
@property (nonatomic) BOOL hasSetStickyHeight;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} cardRect;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)splitConfigType;
- (BOOL)getShouldSticky;
- (id)cardRect;
- (void)configCardFrame:;
- (void)configStickyHeight:;
- (id)diffIdentifier;
- (id)edgeForObject;
- (BOOL)getHasSetStickyHeight;
- (id)getcardRect;
- (BOOL)hasSetStickyHeight;
- (BOOL)isEqualToDiffableObject:;
- (BOOL)moveInSplit;
- (void)setCardRect:;
- (void)setHasSetStickyHeight:;
- (void)setShouldSticky:;
- (void)setSplitConfigType:;
- (void)setStickyHeight:;
- (void)sethasSetStickyHeight:;
- (BOOL)shouldSticky;
- (BOOL)showInSplit;
- (double)stickyHeight;
- (void)setEdge:;
- (void).cxx_destruct;
- (id)edge;
- (id)bubble;
- (void)setBubble:;
@end
