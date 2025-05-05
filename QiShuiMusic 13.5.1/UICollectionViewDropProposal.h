@interface UICollectionViewDropProposal : UIDropProposal
@property (nonatomic) q intent;
- (long long)intent;
- (id)description;
- (void)setIntent:;
- (id)initWithDropOperation:;
- (id)initWithDropOperation:intent:;
- (id)initWithDropOperation:dropLocation:;
- (long long)dropLocation;
@end
