@interface FKTextCandidate : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) float confidence;
- (float)confidence;
- (void)dealloc;
- (id)text;
- (id)initWithText:confidence:;
@end
