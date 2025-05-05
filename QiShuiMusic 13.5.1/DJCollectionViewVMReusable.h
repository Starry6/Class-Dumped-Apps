@interface DJCollectionViewVMReusable : NSObject
@property (nonatomic) NSString reuseableIdentifier;
@property (nonatomic) DJCollectionViewVMSection section;
@property (nonatomic) NSObject paramObject;
@property (nonatomic) {CGSize=dd} resuableSize;
@property (nonatomic) q sizeCaculateType;
@property (nonatomic) UIColor backgroundColor;
- (void)setParamObject:;
- (id)paramObject;
- (id)resuableSize;
- (id)reuseableIdentifier;
- (void)setResuableSize:;
- (void)setReuseableIdentifier:;
- (void)setSizeCaculateType:;
- (long long)sizeCaculateType;
- (void)setBackgroundColor:;
- (id)backgroundColor;
- (void)setSection:;
- (void).cxx_destruct;
- (id)section;
@end
