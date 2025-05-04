@interface AWEUserProfileAdVideoInsertModel : NSObject
@property (nonatomic) AWESegmentListSubSegment requestCompletionSegment;
@property (nonatomic) q resultSeqPos;
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) q insertIndex;
@property (nonatomic) BOOL isInModelSuccess;
- (id)aweme;
- (void)setAweme:;
- (void)setInsertIndex:;
- (long long)insertIndex;
- (id)requestCompletionSegment;
- (long long)resultSeqPos;
- (void)setRequestCompletionSegment:;
- (void)setResultSeqPos:;
- (void)updateInsertPos;
- (BOOL)isInModelSuccess;
- (void)setIsInModelSuccess:;
- (void).cxx_destruct;
@end
