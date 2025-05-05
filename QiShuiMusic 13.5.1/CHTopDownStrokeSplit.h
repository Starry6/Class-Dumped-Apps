@interface CHTopDownStrokeSplit : NSObject
@property (nonatomic) NSArray strokeGroup1;
@property (nonatomic) NSArray strokeGroup2;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} groupBounds1;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} groupBounds2;
@property (nonatomic) double transitionTime;
@property (nonatomic) NSArray orderedStrokes;
@property (nonatomic) NSArray orderedStrokesGroup1;
@property (nonatomic) NSArray orderedStrokesGroup2;
@property (nonatomic) q substrokeCount1;
@property (nonatomic) q substrokeCount2;
- (void).cxx_destruct;
- (id)orderedStrokes;
- (id)initWithStrokes:substrokesByStrokeIdentifier:splitIndex:;
- (long long)_substrokeCountForStrokes:substrokesByStrokeIdentifier:;
- (id)strokeGroup1;
- (id)strokeGroup2;
- (id)groupBounds1;
- (id)groupBounds2;
- (double)transitionTime;
- (id)orderedStrokesGroup1;
- (id)orderedStrokesGroup2;
- (long long)substrokeCount1;
- (long long)substrokeCount2;
+ (id)writingDirectionOrderedStrokes:substrokesByStrokeIdentifier:;
@end
