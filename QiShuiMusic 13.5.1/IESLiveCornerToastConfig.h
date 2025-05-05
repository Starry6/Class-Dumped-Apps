@interface IESLiveCornerToastConfig : NSObject
@property (nonatomic) Q priority;
- (BOOL)equalToOtherConfig:;
- (BOOL)higherThanOtherConfig:;
- (BOOL)lowerThanOtherConfig:;
- (id)init;
- (void)setPriority:;
- (unsigned long long)priority;
@end
