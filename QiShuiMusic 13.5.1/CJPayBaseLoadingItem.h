@interface CJPayBaseLoadingItem : NSObject
@property (nonatomic) <CJPayLoadingManagerProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addLoadingCount;
- (void)resetLoadingCount;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (long long)loadingType;
@end
