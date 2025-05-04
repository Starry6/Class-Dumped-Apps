@interface AWENearbyAsyncExposeCardModel : AWEBaseApiModel
@property (nonatomic) BOOL asyncEnable;
@property (nonatomic) NSNumber cardType;
- (BOOL)asyncEnable;
- (void)setAsyncEnable:;
- (void).cxx_destruct;
- (id)cardType;
- (void)setCardType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
