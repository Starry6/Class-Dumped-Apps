@interface IESLivePublicScreenFixedCardModel : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) q cardType;
@property (nonatomic) double duration;
@property (nonatomic) q priority;
@property (nonatomic) NSDictionary params;
@property (nonatomic) q displayState;
@property (nonatomic) IESLivePublicScreenFixedCardItem relatedItem;
- (void)setRelatedItem:;
- (id)relatedItem;
- (void)setPriority:;
- (void)setName:;
- (void)setDisplayState:;
- (void)setDuration:;
- (void).cxx_destruct;
- (id)name;
- (double)duration;
- (id)params;
- (long long)displayState;
- (long long)priority;
- (long long)cardType;
- (void)setCardType:;
- (void)setParams:;
@end
