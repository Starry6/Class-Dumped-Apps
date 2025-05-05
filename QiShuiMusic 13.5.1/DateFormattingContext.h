@interface DateFormattingContext : NSObject
@property (nonatomic) NSDate referenceDate;
@property (nonatomic) BOOL isLuminanceReduced;
- (id)init;
- (id)initWithReferenceDate:isLuminanceReduced:;
- (void).cxx_destruct;
- (id)referenceDate;
- (BOOL)isLuminanceReduced;
@end
