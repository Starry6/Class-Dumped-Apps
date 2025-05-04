@interface AWEFormatGuideComponent : AWEIMComponentBase
@property (nonatomic) BOOL showInFloatMode;
@property (nonatomic) @? continueBlock;
@property (nonatomic) @? removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) Q priorityValue;
- (void)didUpdateFormatRoom:;
- (void)willSendNewMessage;
- (BOOL)showInFloatMode;
- (void)setShowInFloatMode:;
- (id)removeBlock;
- (void)setRemoveBlock:;
- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:;
- (id)shouldRemoveForPriorityObject:;
- (void)componentDidMounted:;
- (id)init;
- (void)setInvalid:;
- (void).cxx_destruct;
- (BOOL)invalid;
- (id)continueBlock;
- (void)setContinueBlock:;
- (unsigned long long)priorityValue;
- (void)setPriorityValue:;
+ (BOOL)canCreateComponentWithContext:;
@end
