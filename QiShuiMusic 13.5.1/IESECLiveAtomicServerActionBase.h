@interface IESECLiveAtomicServerActionBase : MTLModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q actionType;
@property (nonatomic) IESECLiveAtomicServerActionDialog dialog;
@property (nonatomic) IESECLiveAtomicServerActionBiz bizAction;
@property (nonatomic) IESECLiveAtomicServerActionJump jumpAction;
@property (nonatomic) @ goodsModel;
@property (nonatomic) NSDictionary extraInfo;
- (id)bizAction;
- (id)goodsModel;
- (id)jumpAction;
- (void)setBizAction:;
- (void)setExtraInfo:;
- (void)setGoodsModel:;
- (void)setJumpAction:;
- (long long)actionType;
- (void)setActionType:;
- (void).cxx_destruct;
- (id)dialog;
- (void)setDialog:;
- (id)extraInfo;
+ (id)JSONKeyPathsByPropertyKey;
@end
