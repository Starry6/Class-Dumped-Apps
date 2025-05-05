@interface SFContactAutoFillValue : NSObject
@property (nonatomic) BOOL selected;
@property (nonatomic) NSString label;
@property (nonatomic) NSString displayValue;
@property (nonatomic) NSArray matches;
- (BOOL)selected;
- (void)setSelected:;
- (id)label;
- (void).cxx_destruct;
- (id)matches;
- (id)displayValue;
- (id)initWithMatches:displayValue:label:;
@end
