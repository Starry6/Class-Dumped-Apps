@interface IESLivePinOperateInfo : NSObject
@property (nonatomic) NSAttributedString optTitleAttr;
@property (nonatomic) BOOL optCancelAvailable;
@property (nonatomic) NSString mixCreatorUid;
- (id)mixCreatorUid;
- (BOOL)optCancelAvailable;
- (id)optTitleAttr;
- (void)setMixCreatorUid:;
- (void)setOptCancelAvailable:;
- (void)setOptTitleAttr:;
- (void).cxx_destruct;
@end
