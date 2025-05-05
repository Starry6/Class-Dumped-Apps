@interface IESLiveRightTopMutuallyExclusiveItem : NSObject
@property (nonatomic) q priority;
@property (nonatomic) NSString identifier;
@property (nonatomic) UIView insertView;
@property (nonatomic) {CGSize=dd} contentSize;
@property (nonatomic) @? removeBlock;
@property (nonatomic) @? showBlock;
- (void)setRemoveBlock:;
- (id)insertView;
- (id)removeBlock;
- (void)setInsertView:;
- (void)setShowBlock:;
- (id)showBlock;
- (id)init;
- (void)setPriority:;
- (id)identifier;
- (void).cxx_destruct;
- (id)contentSize;
- (void)setIdentifier:;
- (void)setContentSize:;
- (long long)priority;
@end
