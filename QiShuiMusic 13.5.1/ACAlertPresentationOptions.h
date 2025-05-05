@interface ACAlertPresentationOptions : NSObject
@property (nonatomic) BOOL optional;
@property (nonatomic) BOOL interrupting;
- (void)setOptional:;
- (BOOL)optional;
- (BOOL)interrupting;
- (void)setInterrupting:;
@end
