@interface UITextInputStringTokenizer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)_indexForTextPosition:;
- (BOOL)isPosition:atBoundary:inDirection:;
- (id)rangeEnclosingPosition:withGranularity:inDirection:;
- (id)initWithTextInput:;
- (BOOL)isPosition:withinTextUnit:inDirection:;
- (id)positionFromPosition:toBoundary:inDirection:;
- (id)_positionFromPosition:offset:affinity:;
- (id)_closestTokenSubrangeForPosition:granularity:downstream:;
- (void).cxx_destruct;
- (BOOL)_isDownstreamForDirection:atPosition:;
- (long long)_distanceForTokenizerWithGranularity:;
@end
