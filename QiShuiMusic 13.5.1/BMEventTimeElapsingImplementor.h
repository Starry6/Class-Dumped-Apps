@interface BMEventTimeElapsingImplementor : BMEventBase
@property (nonatomic) NSDateInterval dateInterval;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) double duration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAbsoluteTimestamp:;
- (id)dateInterval;
- (id)init;
- (void)setDateInterval:;
- (double)absoluteTimestamp;
- (void)setDuration:;
- (BOOL)isCompleteWithContext:error:;
- (BOOL)isValidWithContext:error:;
- (double)duration;
@end
