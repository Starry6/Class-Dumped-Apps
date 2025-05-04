@interface AWEPostPageScheduleDateParameter : NSObject
@property (nonatomic) NSDate beginDate;
@property (nonatomic) NSDate selectedDate;
@property (nonatomic) NSTimeZone timeZone;
@property (nonatomic) @? completion;
@property (nonatomic) BOOL enableClear;
@property (nonatomic) BOOL isReedit;
- (BOOL)isReedit;
- (void)setIsReedit:;
- (BOOL)enableClear;
- (void)setEnableClear:;
- (id)timeZone;
- (id)completion;
- (void)setTimeZone:;
- (void)setCompletion:;
- (void).cxx_destruct;
- (void)setBeginDate:;
- (id)beginDate;
- (id)selectedDate;
- (void)setSelectedDate:;
@end
