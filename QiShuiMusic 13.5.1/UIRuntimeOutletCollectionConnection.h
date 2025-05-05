@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection
@property (nonatomic) NSString runtimeCollectionClassName;
@property (nonatomic) BOOL addsContentToExistingCollection;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)connect;
- (id)description;
- (void)connectForSimulator;
- (void)performConnect;
- (id)runtimeCollectionClassName;
- (void)setRuntimeCollectionClassName:;
- (BOOL)addsContentToExistingCollection;
- (void)setAddsContentToExistingCollection:;
@end
