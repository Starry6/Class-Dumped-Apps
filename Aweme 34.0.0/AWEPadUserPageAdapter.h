@interface AWEPadUserPageAdapter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)performPadAction:;
- (BOOL)enablePadStyle;
- (BOOL)enableRotateOnCustom;
- (double)cellWidthOnCollectionViewWidth:;
- (double)cellHeightOnCollectionViewWidth:;
- (double)cellItemSpacingOnWidth:;
- (long long)numberOfCellsPerRowOnCollectionViewWidth:;
- (unsigned long long)padStyleForWidth:;
- (BOOL)enableUserPageSplitScreenWithReferString:;
- (BOOL)enableUserPageSplitScreenOnlyJudgeReferString:;
- (id)weakTarget;
+ (Class)weakTargetClass;
@end
