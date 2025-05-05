@interface IESLiveSaaSPBGameExtra : GPBMessage
@property (nonatomic) NSInteger kind;
@property (nonatomic) NSInteger status;
@property (nonatomic) q gameId;
@property (nonatomic) NSInteger gameKind;
@property (nonatomic) q roundId;
@property (nonatomic) q reload;
@property (nonatomic) q chat;
@property (nonatomic) q loader;
@property (nonatomic) NSMutableDictionary data_p;
@property (nonatomic) Q data_p_Count;
@property (nonatomic) NSInteger giftLimit;
+ (id)descriptor;
@end
