@interface IESLivePublicScreenFixedCardItem : NSObject
@property (nonatomic) q cardType;
@property (nonatomic) double preferredDuration;
@property (nonatomic) NSString cardName;
@property (nonatomic) @? shouldDisplay;
@property (nonatomic) @? displayStateDidChage;
- (id)displayStateDidChage;
- (void)setDisplayStateDidChage:;
- (double)preferredDuration;
- (void).cxx_destruct;
- (void)setPreferredDuration:;
- (long long)cardType;
- (void)setCardType:;
- (id)cardName;
- (void)setCardName:;
- (id)shouldDisplay;
- (void)setShouldDisplay:;
@end
