@interface IESECRelationFeedCommentInfo : NSObject
@property (nonatomic) IESECRelationFeedCommentViewModel productCommentsModel;
@property (nonatomic) IESECInnerFlowProductComment info;
@property (nonatomic) NSArray comments;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString schema;
@property (nonatomic) BOOL animate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)clickComment;
- (id)commentsModel;
- (id)productCommentsModel;
- (void)setProductCommentsModel:;
- (id)schema;
- (id)desc;
- (void)setInfo:;
- (void)setDesc:;
- (void)setSchema:;
- (void).cxx_destruct;
- (BOOL)animate;
- (id)info;
- (id)comments;
- (void)setComments:;
- (void)setAnimate:;
@end
