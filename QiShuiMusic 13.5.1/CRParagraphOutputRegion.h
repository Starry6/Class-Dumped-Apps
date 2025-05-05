@interface CRParagraphOutputRegion : CRCompositeOutputRegion
@property (nonatomic) BOOL useLineSeparatorAsJoiningDelimiter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)type;
- (id)layoutComponents;
- (id)copyWithZone:copyChildren:copyCandidates:;
- (id)joiningDelimiter;
- (id)regionsSuitableForDataDetectorOutput;
- (BOOL)useLineSeparatorAsJoiningDelimiter;
- (void)setUseLineSeparatorAsJoiningDelimiter:;
+ (id)paragraphsWithLines:;
+ (id)paragraphWithLines:confidence:baselineAngle:;
@end
