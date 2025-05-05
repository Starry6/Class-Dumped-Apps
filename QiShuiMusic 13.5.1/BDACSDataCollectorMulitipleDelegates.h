@interface BDACSDataCollectorMulitipleDelegates : NSObject
@property (nonatomic) NSArray<BDACSDataCollectorDelegate> delegates;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dataCollectorDeallocating;
- (void)dataCollectorDidSaveFile:;
- (id)initWithDelegates:;
- (BOOL)shouldRemoveFileItem:processorType:;
- (BOOL)shouldSaveFileItem:;
- (id)delegates;
- (void).cxx_destruct;
@end
