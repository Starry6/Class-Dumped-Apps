@interface AWEIMHotSpotCommentModel : NSObject
@property (nonatomic) AWECommentModel commentModel;
@property (nonatomic) NSString hotSpotID;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString authorSecUid;
@property (nonatomic) BOOL commentUnavailable;
@property (nonatomic) NSDictionary extraParams;
- (void)setExtraParams:;
- (id)commentModel;
- (void)setCommentModel:;
- (id)extraParams;
- (id)authorSecUid;
- (id)hotSpotID;
- (void)setAuthorSecUid:;
- (void)setHotSpotID:;
- (BOOL)commentUnavailable;
- (id)initWithCommentModel:hotSpotID:schema:authorSecUid:extraParams:;
- (void)setCommentUnavailable:;
- (id)schema;
- (void)setSchema:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
