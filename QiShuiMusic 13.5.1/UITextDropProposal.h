@interface UITextDropProposal : UIDropProposal
@property (nonatomic) Q dropAction;
@property (nonatomic) Q dropProgressMode;
@property (nonatomic) BOOL useFastSameViewOperations;
@property (nonatomic) Q dropPerformer;
- (id)copyWithZone:;
- (id)initWithDropOperation:;
- (unsigned long long)dropAction;
- (void)setDropAction:;
- (unsigned long long)dropProgressMode;
- (void)setDropProgressMode:;
- (BOOL)useFastSameViewOperations;
- (void)setUseFastSameViewOperations:;
- (unsigned long long)dropPerformer;
- (void)setDropPerformer:;
@end
