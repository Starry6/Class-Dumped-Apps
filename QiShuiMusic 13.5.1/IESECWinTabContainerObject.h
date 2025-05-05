@interface IESECWinTabContainerObject : NSObject
@property (nonatomic) Q splitConfigType;
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
- (id)diffIdentifier;
- (BOOL)getHasSetStickyHeight;
- (id)getcardRect;
- (BOOL)hasSetStickyHeight;
- (BOOL)isEqualToDiffableObject:;
- (BOOL)moveInSplit;
- (void)setCardRect:;
- (void)setHasSetStickyHeight:;
- (void)setShouldSticky:;
- (void)setSplitConfigType:;
- (void)sethasSetStickyHeight:;
- (BOOL)shouldSticky;
- (BOOL)showInSplit;
@end
