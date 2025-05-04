@interface AWEPzDomainDBLimit : NSObject
@property (nonatomic) NSString domain;
@property (nonatomic) NSDate earliestDate;
@property (nonatomic) NSInteger maxLines;
- (void)setDomain:;
- (id)domain;
- (int)maxLines;
- (void)setMaxLines:;
- (void).cxx_destruct;
- (id)earliestDate;
- (void)setEarliestDate:;
@end
