@interface MNSignInstructionContents : MNListInstructionContents
@property (nonatomic) NSArray mergeFormats;
@property (nonatomic) NSArray continueFormats;
@property (nonatomic) NSArray maneuverFormats;
@property (nonatomic) q context;
@property (nonatomic) BOOL suppressNames;
@property (nonatomic) NSString roadName;
@property (nonatomic) BOOL hasServerContent;
@property (nonatomic) BOOL suppressFallback;
- (long long)context;
- (void).cxx_destruct;
- (id)description;
- (void)_populateFromStep:;
- (id)instructionWithShorterAlternatives;
- (id)instructionForStage:distance:;
- (BOOL)hasServerContent;
- (id)_instructionsForFormats:;
- (id)mergeFormats;
- (void)setMergeFormats:;
- (id)continueFormats;
- (void)setContinueFormats:;
- (id)maneuverFormats;
- (void)setManeuverFormats:;
+ (id)contentsWithStep:destination:;
@end
