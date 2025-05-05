@interface PLCoreDuetEventInterval : NSObject
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
- (id)startDate;
- (void)setStartDate:;
- (BOOL)intersects:;
- (void)setEndDate:;
- (id)endDate;
- (void).cxx_destruct;
- (id)description;
- (id)joinWithInterval:;
@end
