@interface SHSheetActivityPerformerResult : NSObject
@property (nonatomic) q completedState;
@property (nonatomic) NSArray returnedItems;
@property (nonatomic) NSError error;
@property (nonatomic) UIActivity activity;
- (void)setError:;
- (id)error;
- (id)activity;
- (void).cxx_destruct;
- (id)description;
- (id)initWithActivity:completedState:returnedItems:error:;
- (long long)completedState;
- (void)setCompletedState:;
- (id)returnedItems;
- (void)setReturnedItems:;
@end
