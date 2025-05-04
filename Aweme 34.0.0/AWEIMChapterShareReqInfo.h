@interface AWEIMChapterShareReqInfo : MTLModel
@property (nonatomic) q itemId;
@property (nonatomic) q shareTimestamp;
@property (nonatomic) q chapterNodeTimestamp;
@property (nonatomic) q chapterNodeIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)chapterNodeTimestamp;
- (void)setShareTimestamp:;
- (void)setChapterNodeTimestamp:;
- (long long)chapterNodeIndex;
- (void)setChapterNodeIndex:;
- (long long)itemId;
- (long long)shareTimestamp;
- (void)setItemId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
