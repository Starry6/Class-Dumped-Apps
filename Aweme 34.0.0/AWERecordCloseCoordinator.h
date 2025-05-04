@interface AWERecordCloseCoordinator : NSObject
@property (nonatomic) Q closeEvent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)transitionFrom:scopeContext:;
- (unsigned long long)closeEvent;
- (void)setCloseEvent:;
@end
