@interface AWEIMFansGroupPrivilegeEscalationViewModel : NSObject
@property (nonatomic) q creatCountLimit;
@property (nonatomic) NSString titleText;
@property (nonatomic) NSString subtitleText;
@property (nonatomic) NSString transferText;
@property (nonatomic) NSString confirmText;
@property (nonatomic) NSString transferSchema;
- (void)setTransferSchema:;
- (id)transferSchema;
- (void)didTransfer;
- (id)transferText;
- (void)willTransfer;
- (long long)creatCountLimit;
- (void)setCreatCountLimit:;
- (void)setTransferText:;
- (id)subtitleText;
- (void)setTitleText:;
- (id)titleText;
- (void)didAppear;
- (void).cxx_destruct;
- (void)setSubtitleText:;
- (void)setConfirmText:;
- (id)confirmText;
@end
