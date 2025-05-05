@interface CLHidDevice : NSObject
@property (nonatomic) HIDDevice hidDevice;
@property (nonatomic) NSDictionary matching;
- (void)dealloc;
- (void)setMatching:;
- (id)initWithHidDevice:matchingDict:;
- (BOOL)setReport:payload:length:;
- (id)matching;
- (id)hidDevice;
- (void)setHidDevice:;
@end
