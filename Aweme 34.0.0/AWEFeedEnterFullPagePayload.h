@interface AWEFeedEnterFullPagePayload : NSObject
@property (nonatomic) NSArray commentIDs;
@property (nonatomic) NSString highlightID;
@property (nonatomic) q currentPaginatedIndex;
@property (nonatomic) NSString priorityType;
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) AWECommentRequestExtraModel commentExtraParams;
- (void)setLogExtra:;
- (id)logExtra;
- (long long)currentPaginatedIndex;
- (void)setCurrentPaginatedIndex:;
- (id)priorityType;
- (void)setPriorityType:;
- (void)setCommentIDs:;
- (void)setHighlightID:;
- (void)setCommentExtraParams:;
- (id)commentExtraParams;
- (id)highlightID;
- (id)commentIDs;
- (id)logJsonStr;
- (void).cxx_destruct;
@end
