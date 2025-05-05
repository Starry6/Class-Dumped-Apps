@interface MKTransitDepartureServiceGapFormatterResult : NSObject
@property (nonatomic) NSString format;
@property (nonatomic) NSString dateDescription;
@property (nonatomic) Q dateFormat;
@property (nonatomic) NSString formattedString;
- (id)format;
- (unsigned long long)dateFormat;
- (void).cxx_destruct;
- (id)formattedString;
- (id)initWithFormat:dateDescription:dateFormat:;
- (id)dateDescription;
@end
