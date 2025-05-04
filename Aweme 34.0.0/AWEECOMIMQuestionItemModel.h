@interface AWEECOMIMQuestionItemModel : NSObject
@property (nonatomic) NSString questionId;
@property (nonatomic) NSString questionContent;
@property (nonatomic) NSString rank;
@property (nonatomic) NSString from;
- (id)questionId;
- (id)questionContent;
- (void)setQuestionContent:;
- (void)setQuestionId:;
- (id)rank;
- (void)setRank:;
- (void).cxx_destruct;
- (void)setFrom:;
- (id)from;
@end
