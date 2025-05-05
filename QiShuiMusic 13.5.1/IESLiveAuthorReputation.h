@interface IESLiveAuthorReputation : IESLivePBBaseMessage
@property (nonatomic) NSString text;
@property (nonatomic) double score;
@property (nonatomic) NSInteger level;
@property (nonatomic) NSString sales;
@property (nonatomic) NSString percent;
@property (nonatomic) NSString recommendCount;
+ (id)descriptor;
@end
