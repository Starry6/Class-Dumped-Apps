@interface AWEGeneralSearchSubCardInfo : AWEBaseApiModel
@property (nonatomic) q index;
@property (nonatomic) q count;
@property (nonatomic) q docType;
@property (nonatomic) Q cardType;
- (BOOL)isBottomCard;
- (BOOL)isTopCard;
- (void)setIndex:;
- (long long)index;
- (void)setCount:;
- (long long)count;
- (unsigned long long)cardType;
- (void)setCardType:;
- (void)setDocType:;
- (long long)docType;
@end
