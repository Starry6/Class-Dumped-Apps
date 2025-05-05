@interface OSABinaryImageSegment : NSObject
@property (nonatomic) NSInteger source;
@property (nonatomic) Q used_index;
@property (nonatomic) OSASymbolInfo symbolInfo;
- (id)symbolInfo;
- (unsigned long long)used_index;
- (id)initWithAddress:size:for:;
- (void)setUsed_index:;
- (void).cxx_destruct;
- (int)source;
- (id)details;
- (id)initWithSymbol:;
- (id)full_details;
- (void)setSource:;
@end
