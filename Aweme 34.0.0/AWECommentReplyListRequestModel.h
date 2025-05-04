@interface AWECommentReplyListRequestModel : NSObject
@property (nonatomic) NSString awemeID;
@property (nonatomic) NSString commentID;
@property (nonatomic) NSNumber offset;
@property (nonatomic) NSNumber count;
@property (nonatomic) NSArray insertIDs;
@property (nonatomic) NSArray topIDs;
@property (nonatomic) NSString referString;
@property (nonatomic) NSDictionary extraParams;
- (id)referString;
- (void)setInsertIDs:;
- (id)insertIDs;
- (void)setReferString:;
- (void)setExtraParams:;
- (id)extraParams;
- (id)commentID;
- (void)setAwemeID:;
- (id)awemeID;
- (void)setCommentID:;
- (void)setTopIDs:;
- (id)topIDs;
- (void)setCount:;
- (void)setOffset:;
- (id)offset;
- (id)count;
- (void).cxx_destruct;
@end
