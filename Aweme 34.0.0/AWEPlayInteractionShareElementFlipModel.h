@interface AWEPlayInteractionShareElementFlipModel : NSObject
@property (nonatomic) <AWEIMShareModelProtocol> flipShareModel;
@property (nonatomic) NSString shareFlipTrigger;
@property (nonatomic) NSString shareFlipType;
@property (nonatomic) BOOL hasIncentivePendant;
@property (nonatomic) BOOL defaultSelectFlipShareModel;
- (id)flipShareModel;
- (id)shareFlipTrigger;
- (id)shareFlipType;
- (void)setFlipShareModel:;
- (void)setShareFlipTrigger:;
- (void)setShareFlipType:;
- (BOOL)hasIncentivePendant;
- (void)setHasIncentivePendant:;
- (BOOL)defaultSelectFlipShareModel;
- (void)setDefaultSelectFlipShareModel:;
- (void).cxx_destruct;
@end
