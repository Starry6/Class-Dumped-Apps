@interface IESIMUserStarBillBoardInfoModel : IESIMBaseApiModel
@property (nonatomic) q boardType;
@property (nonatomic) q rank;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString content;
- (long long)boardType;
- (void)setBoardType:;
- (id)content;
- (void)setContent:;
- (id)schema;
- (long long)rank;
- (void)setSchema:;
- (void).cxx_destruct;
- (void)setRank:;
+ (id)JSONKeyPathsByPropertyKey;
@end
