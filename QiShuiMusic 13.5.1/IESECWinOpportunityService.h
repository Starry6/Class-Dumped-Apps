@interface IESECWinOpportunityService : NSObject
@property (nonatomic) IESECWinContext context;
@property (nonatomic) NSHashTable hashTable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)exitWindow;
- (id)hashTable;
- (void)registerOpportunity:;
- (void)setHashTable:;
- (void)tabViewController_viewWillAppear:;
- (void)tabViewController_viewWillDisappear:;
- (void)transpondMessage:;
- (id)context;
- (void)viewDidDisappear:;
- (void)viewWillDisappear:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (void)setContext:;
- (void)viewDidLoad;
@end
