@interface UITableViewDropProposal : UIDropProposal
@property (nonatomic) q intent;
@property (nonatomic) NSIndexPath adjustedTargetIndexPath;
@property (nonatomic) q _dropLocation;
- (long long)intent;
- (void).cxx_destruct;
- (void)setIntent:;
- (id)initWithDropOperation:;
- (id)initWithDropOperation:intent:;
- (id)initWithDropOperation:dropLocation:;
- (long long)_dropLocation;
- (id)_updatedDropProposalWithDropOperation:dropIntent:adjustedTargetIndexPath:;
- (long long)_dropAction;
- (id)_adjustedTargetIndexPath;
- (void)_setAdjustedTargetIndexPath:;
@end
