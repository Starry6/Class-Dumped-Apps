@interface AlgosScoreCSVReader : NSObject
@property (nonatomic) NSArray rows;
@property (nonatomic) NSDictionary headings;
@property (nonatomic) NSError error;
- (void)setRows:;
- (id)rows;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (id)headings;
- (void)setHeadings:;
- (id)stripAndQuoteString:;
- (id)fixStrings:;
- (id)parseFile:header:;
- (id)initWithFileName:header:;
- (id)atRow:col:;
- (id)atRowIndex:col:;
- (double)doubleAtRow:col:defaultValue:;
- (double)doubleAtRow:colIndex:defaultValue:;
- (long long)intAtRow:col:defaultValue:;
- (long long)intAtRow:colIndex:defaultValue:;
- (void)sortOnColumnIndex:ascending:;
- (void)sortOnColumn:ascending:;
- (void)debugPrint:;
+ (id)csvReader:header:;
@end
