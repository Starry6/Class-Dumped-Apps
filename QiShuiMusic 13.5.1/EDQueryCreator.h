@interface EDQueryCreator : NSObject
@property (nonatomic) NSString queryType;
- (void).cxx_destruct;
- (id)queryType;
- (id)queryWithStartDate:endDate:;
- (id)initWithQueryType:;
@end
