@interface PLSearchOCRTextLineCandidate : NSObject
@property (nonatomic) NSString line;
@property (nonatomic) NSArray words;
@property (nonatomic) double confidence;
- (double)confidence;
- (void).cxx_destruct;
- (id)description;
- (id)line;
- (id)words;
- (id)initWithLine:words:confidence:;
@end
