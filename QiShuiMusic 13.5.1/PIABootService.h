@interface PIABootService : NSObject
@property (nonatomic) PIABiMapTable bootTable;
@property (nonatomic) NSMutableDictionary bootDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addBootResultWithContext:URL:result:;
- (id)bootDict;
- (void)bootFinishWithContext:URL:;
- (id)bootTable;
- (BOOL)checkBootFinishWithContext:bootList:;
- (id)initService;
- (void)injectBootBridgeWithContext:instance:;
- (void)setBootDict:;
- (void)setBootTable:;
- (void).cxx_destruct;
+ (void)executePrepareServiceTask;
@end
