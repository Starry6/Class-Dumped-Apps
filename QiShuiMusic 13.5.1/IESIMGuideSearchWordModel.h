@interface IESIMGuideSearchWordModel : IESIMBaseApiModel
@property (nonatomic) NSString type;
@property (nonatomic) NSString word;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString queryID;
@property (nonatomic) BOOL hasShown;
- (id)queryID;
- (id)itemID;
- (void)setType:;
- (void)setQueryID:;
- (void)setItemID:;
- (id)type;
- (void).cxx_destruct;
- (id)word;
- (void)setWord:;
- (void)setHasShown:;
- (BOOL)hasShown;
+ (id)JSONKeyPathsByPropertyKey;
@end
