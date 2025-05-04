@interface AWERepoSearchClueModel : NSObject
@property (nonatomic) NSString clueID;
@property (nonatomic) NSArray extraPublishTagNames;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDraft:;
- (void)saveWithDraft:;
- (id)clueID;
- (id)acc_publishTrackEventParams:;
- (void)setClueID:;
- (id)extraPublishTagNames;
- (void)setExtraPublishTagNames:;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
