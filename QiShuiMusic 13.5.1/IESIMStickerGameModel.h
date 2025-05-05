@interface IESIMStickerGameModel : MTLModel
@property (nonatomic) Q gameType;
@property (nonatomic) q gameScore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)gameScore;
- (void)setGameScore:;
- (unsigned long long)gameType;
- (void)setGameType:;
+ (id)gameTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
