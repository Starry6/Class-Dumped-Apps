@interface IESLiveCommentExpandDetailView : UIView
@property (nonatomic) Q currentActionType;
@property (nonatomic) Q detailAreaType;
@property (nonatomic) @? didShow;
@property (nonatomic) @? didDismiss;
@property (nonatomic) @? areaTypeTempChange;
@property (nonatomic) @? willOutput;
@property (nonatomic) @? didOutput;
@property (nonatomic) @? willSend;
@property (nonatomic) @? didDelete;
@property (nonatomic) @? finishComment;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)areaTypeTempChange;
- (unsigned long long)currentActionType;
- (unsigned long long)detailAreaType;
- (id)didDelete;
- (id)didOutput;
- (id)finishComment;
- (void)setAreaTypeTempChange:;
- (void)setDetailAreaType:;
- (void)setDidDelete:;
- (void)setDidOutput:;
- (void)setDidShow:;
- (void)setFinishComment:;
- (void)setWillOutput:;
- (BOOL)supportActionType:;
- (id)willOutput;
- (void)dismiss;
- (void)show;
- (void).cxx_destruct;
- (id)didDismiss;
- (id)didShow;
- (void)setDidDismiss:;
- (void)setWillSend:;
- (id)willSend;
@end
