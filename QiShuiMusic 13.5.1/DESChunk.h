@interface DESChunk : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSNumber clippingBound;
@property (nonatomic) NSMutableData data;
- (id)data;
- (id)key;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithKey:clippingBound:data:;
- (id)clippingBound;
- (void)setClippingBound:;
@end
