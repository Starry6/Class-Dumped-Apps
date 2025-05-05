@interface ARCollaborationStats : NSObject
@property (nonatomic) Q localSessionIdentifier;
@property (nonatomic) Q mergedKeyframesCount;
@property (nonatomic) Q remainingKeyframesCount;
@property (nonatomic) Q remainingWeakKeyframesCount;
@property (nonatomic) Q externalKeyframesCount;
@property (nonatomic) Q externalWeakKeyframesCount;
@property (nonatomic) Q anchorsCount;
@property (nonatomic) BOOL originAnchorMerged;
- (unsigned long long)localSessionIdentifier;
- (void)setLocalSessionIdentifier:;
- (unsigned long long)mergedKeyframesCount;
- (void)setMergedKeyframesCount:;
- (unsigned long long)remainingKeyframesCount;
- (void)setRemainingKeyframesCount:;
- (unsigned long long)remainingWeakKeyframesCount;
- (void)setRemainingWeakKeyframesCount:;
- (unsigned long long)externalKeyframesCount;
- (void)setExternalKeyframesCount:;
- (unsigned long long)externalWeakKeyframesCount;
- (void)setExternalWeakKeyframesCount:;
- (unsigned long long)anchorsCount;
- (void)setAnchorsCount:;
- (BOOL)originAnchorMerged;
- (void)setOriginAnchorMerged:;
@end
