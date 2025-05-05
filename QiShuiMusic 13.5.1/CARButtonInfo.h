@interface CARButtonInfo : NSObject
@property (nonatomic) Q buttonType;
@property (nonatomic) Q buttonLocation;
@property (nonatomic) Q buttonPressDuration;
- (unsigned long long)buttonType;
- (unsigned long long)buttonLocation;
- (id)initWithButtonType:buttonLocation:buttonPressDuration:;
- (unsigned long long)buttonPressDuration;
@end
