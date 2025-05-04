@interface AWEFeedGameCardModel : NSObject
@property (nonatomic) NSString mpID;
@property (nonatomic) NSString mpName;
@property (nonatomic) NSString gameType;
@property (nonatomic) NSNumber cardID;
@property (nonatomic) NSString cardType;
- (id)mpID;
- (void)setMpID:;
- (id)mpName;
- (void)setMpName:;
- (void).cxx_destruct;
- (id)cardType;
- (void)setCardType:;
- (id)gameType;
- (void)setGameType:;
- (id)cardID;
- (void)setCardID:;
+ (id)transferCardType:;
+ (id)modelWithJson:;
@end
