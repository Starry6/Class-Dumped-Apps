@interface IESLiveCommentDraftBox : NSObject
@property (nonatomic) NSMutableDictionary cacheDraft;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cacheDraft;
- (void)clearCommentDraftForSource:;
- (id)commentDraftFromSource:;
- (void)didSetAttachingDIContext;
- (id)generateDraftModel;
- (void)setCacheDraft:;
- (id)init;
- (void).cxx_destruct;
@end
