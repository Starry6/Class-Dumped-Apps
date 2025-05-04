@interface AWEPOILiveDataCenterShelfSource : NSObject
@property (nonatomic) NSString sourceKey;
@property (nonatomic) @? getModelBlock;
@property (nonatomic) @? updateCardListBlock;
@property (nonatomic) @? updateCardListAlsoCloneFlagBlock;
@property (nonatomic) @? updateDataCompletionBlock;
- (id)initWithSourceKey:;
- (void)setData:data:isAppLifeCycle:;
- (void)setGetModelBlock:;
- (void)setUpdateCardListBlock:;
- (void)setUpdateCardListAlsoCloneFlagBlock:;
- (void)setUpdateDataCompletionBlock:;
- (id)getModelBlock;
- (id)updateCardListBlock;
- (id)updateCardListAlsoCloneFlagBlock;
- (id)updateDataCompletionBlock;
- (void).cxx_destruct;
- (id)sourceKey;
- (void)setSourceKey:;
- (id)getData:;
@end
