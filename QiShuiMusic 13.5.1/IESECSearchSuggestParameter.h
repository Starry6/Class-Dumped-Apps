@interface IESECSearchSuggestParameter : NSObject
@property (nonatomic) NSString keyword;
@property (nonatomic) q cursor;
@property (nonatomic) double gapDuration;
@property (nonatomic) Q enterType;
- (void)setGapDuration:;
- (double)gapDuration;
- (long long)cursor;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)setKeyword:;
- (id)keyword;
- (unsigned long long)enterType;
- (void)setEnterType:;
@end
