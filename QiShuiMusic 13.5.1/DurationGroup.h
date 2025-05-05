@interface DurationGroup : NSObject
@property (nonatomic) Q groupId;
@property (nonatomic) NSDate start;
@property (nonatomic) NSDate end;
@property (nonatomic) BOOL wasChanged;
- (void)setEnd:;
- (void)setStart:;
- (id)end;
- (id)start;
- (id)initWithStart:end:;
- (unsigned long long)groupId;
- (void).cxx_destruct;
- (id)description;
- (BOOL)wasChanged;
- (void)setWasChanged:;
@end
