@interface IESLiveSpeedGiftResourceSet : NSObject
@property (nonatomic) Q diamondCount;
@property (nonatomic) Q id_p;
@property (nonatomic) Q type;
@property (nonatomic) BOOL combo;
@property (nonatomic) NSString name;
@property (nonatomic) HTSLiveImage image;
@property (nonatomic) BOOL isAggregateRequest;
- (BOOL)combo;
- (unsigned long long)diamondCount;
- (BOOL)isAggregateRequest;
- (BOOL)isSupportAggregate;
- (void)setCombo:;
- (void)setDiamondCount:;
- (void)setIsAggregateRequest:;
- (void)setName:;
- (void)setType:;
- (void)setImage:;
- (unsigned long long)type;
- (void).cxx_destruct;
- (id)name;
- (id)image;
- (unsigned long long)id_p;
- (void)setId_p:;
@end
