@interface IESLiveLinkmicLinkerAnchorLayoutModel : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSString focusUid;
@property (nonatomic) NSString focusLinkmicId;
@property (nonatomic) q range;
@property (nonatomic) double changedLayoutTime;
- (double)changedLayoutTime;
- (id)focusLinkmicId;
- (id)focusUid;
- (void)setChangedLayoutTime:;
- (void)setFocusLinkmicId:;
- (void)setFocusUid:;
- (void)setRange:;
- (void)setType:;
- (long long)range;
- (long long)type;
- (void).cxx_destruct;
@end
