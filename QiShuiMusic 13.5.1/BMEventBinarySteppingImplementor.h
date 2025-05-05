@interface BMEventBinarySteppingImplementor : BMEventBase
@property (nonatomic) BOOL starting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStarting:;
- (BOOL)isCompleteWithContext:error:;
- (BOOL)isStarting;
- (BOOL)isValidWithContext:error:;
@end
