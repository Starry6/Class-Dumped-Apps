@interface BLSFrameSpecifiersRequestAction : BSAction
@property (nonatomic) NSDateInterval dateInterval;
@property (nonatomic) NSDate previousPresentationDate;
@property (nonatomic) BOOL shouldReset;
- (id)dateInterval;
- (id)initWithDateInterval:previousPresentationDate:shouldReset:completion:;
- (id)previousPresentationDate;
- (BOOL)shouldReset;
@end
