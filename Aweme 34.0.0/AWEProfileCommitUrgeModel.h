@interface AWEProfileCommitUrgeModel : AWEBaseApiModel
@property (nonatomic) BOOL canSendGift;
@property (nonatomic) AWEProfileUrgeControlModel controlModel;
- (id)controlModel;
- (void)setControlModel:;
- (BOOL)canSendGift;
- (void)setCanSendGift:;
- (void).cxx_destruct;
+ (id)controlModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
