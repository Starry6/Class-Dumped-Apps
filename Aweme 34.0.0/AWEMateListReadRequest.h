@interface AWEMateListReadRequest : AWESocialRelationRequest
@property (nonatomic) q count;
@property (nonatomic) q cursor;
@property (nonatomic) q recommendType;
- (long long)recommendType;
- (void)setRecommendType:;
- (long long)cursor;
- (void)setCount:;
- (long long)count;
- (void)setCursor:;
- (id)initWithScene:;
@end
